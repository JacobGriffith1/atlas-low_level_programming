#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 * @c: Character in ASCII
 *
 * Return: 1 if c is a lowercase character, 0 otherwise
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
