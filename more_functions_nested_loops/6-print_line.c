#include "main.h"

/**
 * print_line - Draws a straight line made of underscores.
 *
 * @n: Input for number of underscores.
 *
 * Return: N/A
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
		if (n <= 0)
		{
			_putchar('\0');
		}
	}
}
