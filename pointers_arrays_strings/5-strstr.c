#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: Place to search for needle
 * @needle: What to search for
 * Return: Pointer to start of located substring, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;

	while (*haystack != '\0')
	{
		h = haystack;

		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			h++;
			needle++;
		}
		if (!*needle)
			return (h);
		haystack = h + 1;
	}
	return ('\0');
}
