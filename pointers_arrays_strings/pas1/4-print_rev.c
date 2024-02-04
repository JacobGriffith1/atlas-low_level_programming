#include "main.h"

/**
 * print_rev - Print string in reverse.
 *
 * @s: String input.
 *
 * Return: N/A
 */

void print_rev(char *s)
{
	int l = 0;

	while (l >= 0)
	{
		if (s[l] == '\0')
		{
			break;
		}
		l++;
	}
	for (l--; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar(10);
}
