#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x^y.
 * @x: X value. Will be exponentially multiplied.
 * @y: Y value. Exponent by which x will be multiplied.
 * Return: x^y, or -1 if y is less than zero.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
