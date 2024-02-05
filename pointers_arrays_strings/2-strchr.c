#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to be found
 * Return: c if found, NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0, *s < i; i++)
	{
		if (*(s + i) == c)
		{
			*p = *(s + i);
			break;
		}
		else if (*(s + i) == '\0')
		{
			*p = '\0';
			break;
		}
	}
	return (p);
}
