#include "main.h"
#include "stdio.h"

/**
 * more_numbers - Prints numbers 0-14 ten times, followed by \n.
 *
 * Return: N/A
 */

void more_numbers(void)
{
	int i, l;

	for (l = 0; l <= 9; l++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10);
			_putchar(i % 10);
		}
		_putchar('\n');
	}
}
