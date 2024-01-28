#include "main.h"

/**
 * print_last_digit - Prints the last digit of n
 *
 * @n: Number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
	}
	else
	{
		_putchar(l + 48);
	}
	return (0);
}
