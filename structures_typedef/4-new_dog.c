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
	int i, dname, downer;

	dog = malloc(sizeof(*dog));

	if (dog == NULL || !(name) || !(owner));
	{
		free(dog);
		return (NULL);
	}

	for (dname; name[dname]; dname++)
		;
	for (downer; owner[dower]; downer++)
		;
	
	dog->name = malloc(dog->dname + 1);
	dog->owner = malloc(dog->downer + 1);

	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < downer; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
