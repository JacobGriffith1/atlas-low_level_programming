#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares the length of two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 0 if equal, else another number
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;
	/**
	 * @op: Outcome of operation used to determine if
	 *      strings are the same length.
	 */

	while (op == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
