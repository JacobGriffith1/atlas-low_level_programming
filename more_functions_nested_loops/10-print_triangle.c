#include "main.h"
#include <stdio>

/**
 * print_triangle - Prints a triangle, followed by a newline.
 *
 * @size: Dimension of the triangle.
 *
 * Return: N/A
 */

void print_triangle(int size)
{
	int h, l, n;

	for (h = 0; h < size; h++)
	{
		for (l = size; l > 1; l--)
		{
			_putchar(32);
		}
		for (n = 1; size >= l + n; n++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	_putchar(10);
}
