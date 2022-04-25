#include "lists.h"

/**
 * free_listint - that frees a listint_t list.
 * @head: pointer to the head of a linked list
 *
 * Return: void, nth
 */
void free_listint(listint_t *head)
{
	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
