#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type 'struct dog'.
 * @d: Pointer to the structure named 'dog'.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * Return: N/A
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
