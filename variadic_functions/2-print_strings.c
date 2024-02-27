#include "variadic_functions.h"

/**
 * print_strings - Prints strings and a newline.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 * Return N/A
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *str;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
