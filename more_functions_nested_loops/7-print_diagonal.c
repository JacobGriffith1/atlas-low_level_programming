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
	int p;
	/**
	 * @p: Number of backslashes actually printed.
	 */

	p = 0;

	while (p < n)
	{
		_putchar(92);
		_putchar(10);
		_putchar(32);
		p++;
	}
	_putchar(10);
}
