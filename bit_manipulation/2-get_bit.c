#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Input.
 * @index: The index, starting from 0.
 * Return: Value of the bit at index or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
