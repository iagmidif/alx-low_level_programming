#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to the name string
 * @age: age
 * @owner: pointer to the owner string
 *
 * Return: new instance of do_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned len_n, len_o, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_n = strlen(name);
	dog->name = malloc(sizeof(char) * len_n);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_n; i++)
		dog->name[i] = name[i];

	dog->age = age;

	len_o = strlen(owner);
	dog->owner = malloc(sizeof(char) * len_o);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_o; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
