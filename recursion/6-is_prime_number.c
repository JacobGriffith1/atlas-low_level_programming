#include "main.h"
#include <stdio.h>

/**
 * primecheck - Checks if a number is prime
 * @n: Number
 * @i: Iterator
 * Return: 1 or 0
 */

int primecheck(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + primecheck(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if a number is prime, 0 if composite.
 * @n: Number to be checked.
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (primecheck(n, 2));
}
