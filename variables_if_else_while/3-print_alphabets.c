#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		char ch, uch;

			for (ch = 'a'; ch <= 'z'; ch++) ;
			for (uch = 'A'; uch <= 'Z'; uch++) ;
				{
				putchar(ch);
					if (ch == 'z')
						{
						putchar(uch);
							if (uch == 'Z')
								putchar('\n')
						}
				}
		return (0);
}

