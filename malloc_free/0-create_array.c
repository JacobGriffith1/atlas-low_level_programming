#include "main.h"
#include <stdlib.h>

/**
 * create_array - Makes array of chars, and initializes with a specific char.
 * @size: Size for the array.
 * @c: Character to be stored.
 * Return: Pointer to array on success, NUll on error or size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ('\0');

	a = malloc(sizeof(c) * size);

	if (a == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
