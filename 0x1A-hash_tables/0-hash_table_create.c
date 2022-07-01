#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table)
	{
		new_hash_table->size = size;
		new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
		if (new_hash_table->array == NULL)
		{
			return (NULL);
		}
	}

	return (new_hash_table);
}
