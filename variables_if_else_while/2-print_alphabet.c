#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	if (ch == 'z')
	{
		putchar('\n');
	}
	}
	return (0);
}
