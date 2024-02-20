#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - ALLOCATES memory for an array using [malloc].
 * @nmemb: Number of ELEMENTS
 * @size: Size of BYTES in each ELEMENT of [nmemb].
 * Return: POINTER to MEMORY, NULL if nmemb or size is 0 or [malloc] fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
