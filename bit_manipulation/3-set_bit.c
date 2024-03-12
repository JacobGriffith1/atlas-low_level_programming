#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Input.
 * @index: Index, starting from 0 of the bit to set.
 * Return: 1 (SUCCESS), -1(ERROR)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
