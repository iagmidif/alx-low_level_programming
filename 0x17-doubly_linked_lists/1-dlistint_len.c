#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the DLL
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t n_nodes = 0;

	while (head != NULL)
	{
		n_nodes++;
		head = head->next;
	}
	return (n_nodes);
}
