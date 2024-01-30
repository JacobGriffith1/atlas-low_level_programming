#include "main.h"

/**
 * _puts - Prints a string, followed by a newline.
 *
 * @str: String input.
 *
 * Return: N/A
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(*str[l]);
		l++;
	}
}
