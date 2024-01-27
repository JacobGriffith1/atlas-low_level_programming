#include <stdio.h>

/**
 * main - Program prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
		{
		putchar(d);
		}
	for (d = 'a'; d <= 'f'; d++)
		{
		putchar(d);
		}
			{
			putchar('\n');
			}
	return (0);
}
