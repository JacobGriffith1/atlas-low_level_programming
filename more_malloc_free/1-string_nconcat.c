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
	unsigned int i, j, k, cap;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	cap = i + n;

	ptr = malloc(sizeof(char) * (cap + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < cap; k++)
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - i];
	ptr[k] = '\0';

	return (ptr);
}
