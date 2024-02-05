#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to be found
 * Return: Position in string if found, NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s < i; i++)
	{
		if (*(s + i) == c)
			return (s + 1);
		else if (*(s + i) == '\0')
			return ('\0');
	}
}
