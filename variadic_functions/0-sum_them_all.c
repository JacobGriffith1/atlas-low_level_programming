#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments.
 * Return: Sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(val, n);

	for (i = 0; i < n; i++)
		sum += va_arg(val, int);

	va_end(val);

	return (sum);
}
