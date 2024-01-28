#include "main.h"

/**
 * print_most_numbers - Prints all digits, except for 2 and 4; followed ny \n
 *
 * Return: N/A
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		if (i == 49)
			i++;
		else if (i == 51)
			i++;
	}
	_putchar('\n');
}
