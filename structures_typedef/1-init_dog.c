#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure
 * @name: the name of the dog
 * @owner: the owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
