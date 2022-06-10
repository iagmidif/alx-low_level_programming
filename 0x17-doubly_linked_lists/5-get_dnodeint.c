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
	dlistint_t *h;
	unsigned int i;

	h = head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		for (i = 0; (i < index) && (h != NULL); i++)
			h = h->next;
		return (h);
	}
	return (NULL);
}
