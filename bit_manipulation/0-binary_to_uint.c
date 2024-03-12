#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of '0' and '1' chars.
 * Return: The converted number, or 0
 * if there is a invalid char in b or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int i = 0;

	if (!b)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i = 0;

	while (b[i] == '0' || b[i] == '1')
	{
		ui <<= 1;
		ui += (b[i] - '0');
		i++;
	}
	return (ui);
}
