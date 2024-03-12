#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from
 * one number to another.
 * @n: First number input.
 * @m: Second number input.
 * Return: Number of bits required to flip (bitCount).
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitCount;

	for (bitCount = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitCount++;
	}
	return (bitCount);
}
