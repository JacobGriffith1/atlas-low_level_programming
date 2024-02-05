#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints an ASCII chessboard
 * @a - Input pointer
 * Return: N/A
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar(10);
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar(10);
}
