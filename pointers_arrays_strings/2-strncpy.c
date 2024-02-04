#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to be used from source
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (i >= n && src[i] == '\0')
		{
			dest[i] =  '\0';
			break;
		}
	}
	return (dest);
}
