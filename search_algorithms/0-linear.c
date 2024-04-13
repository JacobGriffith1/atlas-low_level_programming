#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: Value.
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (; i < (int)size; i++)
	{
		printf("Value checked array [%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
