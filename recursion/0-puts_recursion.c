#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a newline.
 * @s: String to be printed.
 * Return: N/A
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
