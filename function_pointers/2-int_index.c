#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array of elemets to search.
 * @size: Number of elememts in the array.
 * @cmp: Pointer to function used to COMPARE elements to desired integer.
 * Return: First element for which the cmp function does not return 0,
 * OR if there is no element returned, or size <= zero, -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1)
}
