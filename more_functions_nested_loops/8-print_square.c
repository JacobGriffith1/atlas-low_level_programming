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

	for (h = 0; h < size; h++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar(35);
		}
		if (h != size - 1)
		{
			_putchar(10);
		}
	}
	_putchar(10);
}
