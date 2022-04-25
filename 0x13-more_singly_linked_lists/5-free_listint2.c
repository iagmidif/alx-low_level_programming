#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * - sets the head to NULL
 * @head: pointer to a pointer to the head of a linked list
 *
 * Return: void, nth
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while ((*head)->next)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
