#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of a linked list
 * @n: integer to be set for the new node n
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	tail = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (tail->next)
		tail = tail->next;
	tail->next = new;

	return (*head);
}
