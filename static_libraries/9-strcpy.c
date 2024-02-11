#include "main.h"

/**
 * _strcpy - Copies a string to destination.
 *
 * @dest: Destination to print to.
 * @src: Source. Will be copied.
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (l >= 0)
	{
		*(dest + l) = *(src + l);
		if (*(src + l) == '\0')
		{
			break;
		}
		l++;
	}
	return (dest);
}
