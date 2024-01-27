#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			if (ch == 'd')
				{
				(ch++);
				}
			if (ch == 'p')
				{
				(ch++);
				}
		}
			{
			putchar('\n');
			}
		return (0);
}
