#include "function_pointers.h"

/**
 * array_iterator - Executes a functon on each element of an array.
 * @array: Array of elements for function to be executed upon.
 * @size: Size of the array.
 * @action: Function pointer.
 * Return: N/A
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
