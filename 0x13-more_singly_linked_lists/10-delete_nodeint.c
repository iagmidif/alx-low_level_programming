#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to a pointer to a the head of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded
 * -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *temp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	h = *head;
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}

	while (h && i < index - 1)
	{
		h = h->next;
		i++;
	}

	if (!h || !(h->next))
		return (-1);
	temp = h->next;
	h->next = temp->next;
	free(temp);

	return (1);
}
