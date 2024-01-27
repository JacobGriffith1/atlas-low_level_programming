#include <stdio.h>

/**
 * main - prints _putchar and a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int ct, sz;

	sz = sizeof(str) / sizeof(int);
	for (ct = 0; ct < sz; ct++)
	{
		_putchar(str[ct]);
	}
	_putchar ('\n');
	return (0);
}
