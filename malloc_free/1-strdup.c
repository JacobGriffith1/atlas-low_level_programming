#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a POINTER to a newly allocated space in memory, which
 * contains a COPY of the STRING given as a parameter.
 * @str: The string to copy and store in the new space in memory.
 * Return: Pointer to the copied string, or NULL if there is an error.
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		return (i);

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}
