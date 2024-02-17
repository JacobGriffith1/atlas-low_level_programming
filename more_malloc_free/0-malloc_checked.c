#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - ALLOCATES MEMORY using [malloc].
 * @b: Amount of BYTES to allocate.
 * Return: POINTER to allocated memory, or 98 if there is  a failure.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
