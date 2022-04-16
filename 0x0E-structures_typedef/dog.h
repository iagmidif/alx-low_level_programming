#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my first structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the name of the dog
 *
 * Description: A structure that represents a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
