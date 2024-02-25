#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: A new dog! Or 'NULL' if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, n, o;

	dog = malloc(sizeof(*dog));

	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;
	for (o = 0; owner[o]; o++)
		;

	dog->name = malloc(n + 1);
	dog->owner = malloc(o + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
