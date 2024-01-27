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
				(ch += 2);
				}
			if (ch == 'p')
				{
				(ch += 2);
				}
		}
			{
			putchar('\n');
			}
		return (0);
}
