#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character
 *
 * @c: Character in ASCII
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
