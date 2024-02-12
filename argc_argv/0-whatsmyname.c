#include <stdio.h>

/**
 * main - Program prints its name, followed by a newline.
 * @argc: Augument count
 * @argv: Argument value
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
