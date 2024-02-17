#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - CONCATENATES two strings.
 * @s1: STRING 1.
 * @s2: STRING 2.
 * @n: Number of BYTES to use.
 * Return: POINTER to newly CONCATENATED string, or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (l = 0; l <= n && l <= NULL; k++, l++)
		ptr[k] = s2[l];

	return (ptr);
}
