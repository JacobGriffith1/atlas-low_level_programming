#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an arry of integers
 *
 * @a: An array of integers
 * @n: Number of elements in the array
 *
 * Return: N/A
 */

void print_array(int *a, int n)
{
	int i, j, rev;

	for (i = 0; i < n ; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
