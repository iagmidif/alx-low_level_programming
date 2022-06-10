#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: pointer to the DLL
 *
 * Return: the sum of the DLL's data, if the DLL is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		while (h != NULL)
		{
			sum += h->n;
			h = h->next;
		}
	}
	return (sum);
}
