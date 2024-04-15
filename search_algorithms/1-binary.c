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
	size_t i = 0;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array");

		m = ((l + r) / 2);

		for (; i < size; i++)
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);
		printf("\n");

		if (array[m] < value)
		{
			l = (m + 1);
			i = (size_t)l;
		}
		else if (array[m] > value)
		{
			r = (m - 1);
			i = size;
		}
		else
			return (m);
	}
	return (-1);
}
