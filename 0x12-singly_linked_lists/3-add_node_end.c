#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to the head of a linked list_t list
 * @str: string to be set for new tail
 *
 * Return: the address of the new element if successful
 * NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tail;

	tail = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
	return (*head);
}
