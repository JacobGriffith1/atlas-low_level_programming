#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to destination to be copied to
 * @src: Pointer to source string to copy (memory area)
 * @n: Unsigned int that dictates how many bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(src + i) = *(dest + i);
	return (dest);
}

