#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer of the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data (n) to be set for the new node
 *
 * Return: the address of the new node
 * NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
