#include "3-calc.h"

/**
 * op_add - Addition.
 * @a: First number.
 * @b: Second number.
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction.
 * @a: First number.
 * @b: Second number.
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication.
 * @a: First number.
 * @b: Second number.
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division.
 * @a: First number.
 * @b: Second number.
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo.
 * @a: First number.
 * @b: Second number.
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
