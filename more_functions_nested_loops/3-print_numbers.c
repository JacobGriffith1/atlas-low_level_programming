#include "main.h"

/**
 * print_numbers - Prints numbers 0-9 and a newline.
 *
 * Return: N/A
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
