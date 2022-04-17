#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  frees dogs.
 * @d: pointer to instance of dog_t
 *
 * Return: nth, void
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
