#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table to be used
 * @key: the string to be used as a key
 * @value: the value to be associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
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

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = new_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
