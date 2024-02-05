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
	unsigned int i = 0;

	for (; *(haystack + i) != '\0'; i++)
	{
		for (; *(needle + j) != '\0'; i++)
		{
			if (*(haystack + i) == *needle)
			{
				return (haystack + i);
			}
		}
	}
	if (*(haystack + i) == *needle)
		return (haystack + i);
	else
		return ('\0');
}
