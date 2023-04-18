#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a struct representing a dog
 * @d: The dog to be initialized
 * @name: a pointer to a string representing the dog's name
 * @age: a floating-point number representing the dog's age
 * @owner: a pointer to a string representing the dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


