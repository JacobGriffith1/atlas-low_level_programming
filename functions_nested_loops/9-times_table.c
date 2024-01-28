#include "main.h"

/**
 * times_table - Prints times table for 0-9
 *
 * Return: N/A
 */

void times_table(void)
{
	int a, b, ab;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			ab = a * b;
			_putchar(44);
			_putchar(32);
			if (ab <= 9)
			{
				_putchar(32);
				_putchar(ab + 48);
			}
			else
			{
				_putchar((ab / 10) + 48);
				_putchar((ab % 10) + 48);
			}
		}
	}
	_putchar(10);
}
