#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 * 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int diff;

	while (head)
	{
		diff = head - (head->next);
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)(head->next), head->next->n);
			break;
		}
	}
	return (count);
}
