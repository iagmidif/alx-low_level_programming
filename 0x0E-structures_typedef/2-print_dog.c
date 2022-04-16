#include <stdio.h>
#include "dog.h"

#define NIL "(nil)"
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
	printf("Name: %s\n", ((d->name) ? (d->name) : NIL));
	if ((d->age) != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", NIL);
	printf("Owner : %s\n", ((d->owner) ? (d->owner) : NIL));
}
