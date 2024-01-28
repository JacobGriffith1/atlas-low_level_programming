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
	int p, s;
	/**
	 * @p: Number of backslashes actually printed.
	 * @s: Number of spaces printed at the start of a line.
	 */

	p = 0;

	while (p < n)
	{
		_putchar(92);
		_putchar(10);
		for (s = 0; s < n; s++)
		{
			_putchar(32);
		}
		p++;
	}
	_putchar(10);
}
