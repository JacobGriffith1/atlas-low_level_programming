#include "main.h"
#include "stdio.h"

/**
 * more_numbers - Prints numbers 0-14 ten times, followed by \n.
 *
 * Return: N/A
 */

void more_numbers(void)
{
	char i[] = "01234567891011121314";
	int l;

	for (l = 0; l <= 9; l++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
