#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the DLL
 * @index: index of the node, starting from 0
 *
 * Return: the nth node if found, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node, *h;
	unsigned int i = 0;

	h = head;
	node = NULL;

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		if (i == index)
		{
			node = h;
			break;
		}
		i++;
		h = h->next;
	}
	return (node);
}
