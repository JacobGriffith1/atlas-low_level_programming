#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - Returns the squre root of a number
 * @n: number
 * @i: iterator
 * Return: sqrt or -1
 */

int find_sqrt(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to have its natural square root returned.
 * Return: Natural square root of n, or -1 if there is no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 2));
}
