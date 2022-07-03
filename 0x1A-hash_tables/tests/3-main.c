#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	const unsigned char *key;
	unsigned long int index;

	ht = hash_table_create(1024);
	
	/* simple test */
	hash_table_set(ht, "betty", "cool");
	key = (const unsigned char *)strdup("betty");
	index = key_index(key, 1024);
		/*key: betty --- value: cool*/
	printf("key: %s --- value: %s\n", ht->array[index]->key, ht->array[index]->value);

	/* test for collision #1 */
	hash_table_set(ht, "hetairas", "first");
	hash_table_set(ht, "mentioner", "second");
	key = (const unsigned char *)strdup("mentioner");
	index = key_index(key, 1024);
		/*key: mentioner --- value: second*/
	printf("key: %s --- value: %s\n", ht->array[index]->key, ht->array[index]->value);
		/*key: hetairas --- value: first*/
	printf("key: %s --- value: %s\n", ht->array[index]->next->key, ht->array[index]->next->value);


	return (EXIT_SUCCESS);
}
