#include "hash_tables.h"

/**
 * shash_table_create - function that creates a sorted hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created array
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_sht = NULL;
	unsigned long int idx;

	new_sht = malloc(sizeof(shash_table_t));
	if (new_sht)
	{
		new_sht->size = size;
		new_sht->shead = NULL;
		new_sht->stail = NULL;
		new_sht->array = malloc(sizeof(shash_table_t *) * size);
		if (new_sht->array == NULL)
			return (NULL);
		for (idx = 0; idx < size; idx++)
			new_sht->array[idx] = NULL;
	}

	return (new_sht);
}

/**
 * shash_table_insert_node - inserts a new node into to a sorted hash table
 * @ht: pointer to the sorted hash table to insert to
 * @new_node: new_node to insert
 *
 * Return: void, nth
 */
void shash_table_insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *head = NULL;

	new_node->sprev = NULL;
	new_node->snext = NULL;
	if (!ht->shead && !ht->stail)
	{
		/* if the sorted linked list is empty  */
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) <= 0)
	{
		/* if the new_node key is greater than the current head's key */
		/* the new_node should be the new head */
		ht->shead->sprev = new_node;
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		/* the new node should be inserted somewhere inside the list */
		head = ht->shead;
		while (head->snext && strcmp(new_node->key, head->snext->key) > 0)
			head = head->snext;
		new_node->snext = head->next;
		new_node->sprev = head;
		head->snext = new_node;
		if (!new_node->snext)
			ht->stail = new_node;
		else
			new_node->snext->sprev = new_node;
	}
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: the string to be used as a key
 * @value: the value to be associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int idx;
	char *new_value;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new_value = strdup(value);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = new_value;

	shash_table_insert_node(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key from a sorted ht
 * @ht: the sorted hash table to retrieve from
 * @key: then key to be used
 *
 * Return: the value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)strdup(key), ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the sorted hash table to be printed
 *
 * Return: void, nth
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *delim = "";

	if (!ht)
		return;

	printf("{");
	temp = ht->shead;
	while (temp)
	{
		printf("%s", delim);
		delim = ", ";
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table
 * @ht: the sorted hash table to be printed
 *
 * Return: void, nth
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *delim = "";

	if (!ht)
		return;

	printf("{");
	temp = ht->stail;
	while (temp)
	{
		printf("%s", delim);
		delim = ", ";
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to be deleted
 *
 * Return: void, nth
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			tmp_node = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			if (tmp_node->value)
				free(tmp_node->value);
			if (tmp_node->key)
				free(tmp_node->key);
			free(tmp_node);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
