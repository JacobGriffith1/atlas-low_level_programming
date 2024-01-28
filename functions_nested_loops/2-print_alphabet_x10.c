#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, l;

	for (l = 0; l <= 9; l++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
