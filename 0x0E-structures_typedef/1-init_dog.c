#include "dog.h"

/**
 * init_dog - dog class
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of the dog
 * @d: pointer
 * Return: no return
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
