#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		n_nodes++;
		head = head->next;
	}
	return (n_nodes);
}
