#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line descending from the left side.
 *
 *@n: Number of backslashes to print.
 *
 * Return: N/A
 */

void print_diagonal(int n)
{
	int i, j;
	/**
	 * @92: \ in ASCII.
	 * @10: \n in ASCII.
	 * @32: 'space' in ASCII.
	 */

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(32);
		}
		putchar(92);
		if (i < (n - 1))
			putchar (10);
	}
	putchar(10);
}
