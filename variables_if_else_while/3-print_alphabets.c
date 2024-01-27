#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		char ch, uch;

			for (ch = 'a'; ch <= 'z'; ch++)
				{
				putchar(ch);
				if (ch == 'z')
					{
					for (uch = 'A'; uch <= 'Z'; uch++)
					putchar(uch);
					}
					if (uch == 'Z')
					{
					putchar(\n);
					}
				}
				return (0);
}

