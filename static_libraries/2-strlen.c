#include "main.h"

/**
 * _strlen - Returns length of a string.
 *
 * @s: Input string; will be pointed at.
 *
 * Return: String length.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		l++;
	}
	return (l);
}
