#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * - and returns the head node’s data (n).
 * @head: pointer to the head of the linked list
 *
 * Return: data (n) of the head of the linked list
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
