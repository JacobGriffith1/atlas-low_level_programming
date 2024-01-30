#include "main.h"

/**
 * puts2 - Prints ever other character in a string, followed by a newline.
 *
 * @str: String input.
 *
 * Return: N/A
 */

void puts2(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
		l++;
	}
	_putchar(10);
}
