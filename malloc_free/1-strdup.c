#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a POINTER to a newly allocated space in memory, which
 * contains a COPY of the STRING given as a parameter.
 * @str: The string to copy and store in the new space in memory.
 * Return: Pointer to the copied string, or NULL if there is an error.
 */

char *_strdup(char *str);
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * sizeof(str));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= sizeof(str); i++)
		ptr[i] = str[i];

	return (ptr);
}
