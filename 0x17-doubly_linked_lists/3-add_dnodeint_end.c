#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a pointer to the head of a DLL
 * @n: data to be set for th newly added node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	if (head == NULL)
		return (NULL);

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (h == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		new->prev = h;
		h->next = new;
	}
	return (new);
}
