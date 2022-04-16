#include "dog.h"
#define NULL ((void *)0)
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the stucture instance
 * @name: pointer to the name
 * @age: age
 * @owner: pointer to the owner
 *
 * Return: void, nth
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
