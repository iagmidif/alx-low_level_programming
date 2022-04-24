#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of a linked list_t list
 * @str: string to be set as str for the newly added node
 *
 * Return: pointer to the newly set head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = (malloc(sizeof(list_t)));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);

	new_head->next = *head;
	*head = new_head;

	return (*head);
}
