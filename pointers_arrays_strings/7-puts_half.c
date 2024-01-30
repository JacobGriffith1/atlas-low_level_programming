#include "main.h"

/**
 * puts_half - Prints half of a strijng, followed by a newline.
 *
 * @str: String input.
 *
 * Return: N/A
 */

void puts_half(char *str)
{
	int l = 0, h;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			break;
		}
		l++;
	}

	if (l % 2 == 1)
	{
		h = l / 2;
	}
	else
	{
		h = (l + 1) / 2;
	}

	for (h++; h < l; h++)
	{
		_putchar(str[h]);
	}
	_putchar(10);
}
