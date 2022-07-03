#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: void, nth
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
