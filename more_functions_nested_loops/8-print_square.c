#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square with dimensions of size*size
 *
 *@size: Height and length of square.
 *
 * Return: N/A
 */

void print_square(int size)
{
	int h, l;

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
