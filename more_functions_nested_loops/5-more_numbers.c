#include "main.h"

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
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
