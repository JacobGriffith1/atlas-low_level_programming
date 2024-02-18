#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an ARRAY of INTEGERS
 * @min: MINIMUM value.
 * @max: MAXIMUM value.
 * Return: POINTER to new ARRAY, NULL if min > max or [malloc] fails.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
