#include <stdio.h>
#include "dog.h"

#define NULL ((void *)0)

/**
 * print_dog - prints a struct dog
 * @d: pointer to the instance
 *
 * Return: void, nth
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((d->name) ? (d->name) : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ((d->owner) ? (d->owner) : "(nil)"));
}
