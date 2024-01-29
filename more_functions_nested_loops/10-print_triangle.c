#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle, followed by a newline.
 *
 * @size: Dimension of the triangle.
 *
 * Return: N/A
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(32);
			}
			for (j--; j < size; j++)
			{
				_putchar(35);
			}
		}
		if (i < (size - 1))
		{
			_putchar(10);
		}
	}
	if (0 <= (size - 1))
	{
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
