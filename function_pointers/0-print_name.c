#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name to print.
 * @f: Function pointer.
 * Return: N/A
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
