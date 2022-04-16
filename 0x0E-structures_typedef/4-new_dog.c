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
	int name_len, owner_len, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);

	name_len = strlen(name);
	dog->name = malloc(sizeof(dog->name) * name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_len = strlen(owner);
	dog->owner = malloc(sizeof(dog->owner) * owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	dog->age = age;

	return (dog);
}
