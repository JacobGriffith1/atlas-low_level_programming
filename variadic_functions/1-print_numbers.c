#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers and a newline.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: N/A
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start (val, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
