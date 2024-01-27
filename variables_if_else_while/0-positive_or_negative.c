#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to variable (n) each time it is executed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n < 0)
				{
					echo("d% is negative\n", n);
				}
				else if (n == 0)
				{
					echo("d% is zero\n", n);
				}
				else
				{
					echo("d% is positive\n", n);
				}
					return (0);
}
