#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: Pointer to value.
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (size - 1), m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = ((l + r) / 2);
		if (array[m] < value)
			l = (m + 1);
		else if (array[m] > value)
			r = (m - 1);
		else
			return (m);
	}
	return (-1);
}
