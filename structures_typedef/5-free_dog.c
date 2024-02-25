#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Unleash the hounds!
 * @d: That dawg in me (struct dog)
 * Return: I sure hope he does! (N/A)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d.name);
		free(d.owner);
		free(d);
	}
}
