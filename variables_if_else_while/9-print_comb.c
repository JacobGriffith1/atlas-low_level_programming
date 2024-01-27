#include <stdio.h>

/**
 * main - prints all single-digit numbers with commas and spaces
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
		{
			if (d < 57)
			{
			putchar(',');
			{
			if (d < 57)
			{
			putchar(' ');
			{
			if (d == 57)
			{
			putchar('\n');
			}
			}
			}
			}
			}
		}
	}
	return (0);
}
