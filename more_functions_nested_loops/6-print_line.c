#include "main.h"
#include<stdio.h>

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

	while ((i = 0) || i < n)
	{
		_putchar(95);
		i++;
		if (i == n)
		{
			exit(0);
		}
		_putchar('\0');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
