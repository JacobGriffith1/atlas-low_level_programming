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
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}
