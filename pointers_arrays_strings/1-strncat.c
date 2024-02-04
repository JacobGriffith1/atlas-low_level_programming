#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, but with a limit
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of bytes used from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = (*dest + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
