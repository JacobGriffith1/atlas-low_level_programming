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
	int p, s, l;
	/**
	 * @p: Number of backslashes actually printed.
	 * @s: Number of spaces printed at the start of a line.
	 * @l: Number of newlines to be printed.
	 * @92: \ in ASCII.
	 * @10: \n in ASCII.
	 * @32: 'space' in ASCII.
	 */

	p = 0;

	if (p < n)
	{
		_putchar(92);
		for (l = 0; l < p; l++)
		{
			_putchar(10);
		}
		_putchar(10);
		for (s = 0; s < p; s += p)
		{
			_putchar(32);
		}
		p++;
		_putchar(32);
	}
	else
	_putchar(10);

}
