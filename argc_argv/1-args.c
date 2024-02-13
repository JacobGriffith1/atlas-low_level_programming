#include <stdio.h>

/**
 * main - Prints the number of arguments in an array
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
