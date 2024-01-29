#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square with dimensions of size*size
 *
 *@size: Length and Width of square. Only used to check length.
 *
 * Return: N/A
 */

void print_square(int size)
{
	int l, h;

	l = 0;
	h = 0;

	while (l < size)
	{
		while (h < l)
		{
			_putchar(35);
			h++;
		}
		_putchar(10);
	}
	if (l == size)
	{
		_putchar(10);
	}
}
