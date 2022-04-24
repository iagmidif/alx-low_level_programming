#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of a list_t list
 *
 * Return: length of a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *node = h;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
