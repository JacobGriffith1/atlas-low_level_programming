#include <stdio.h>

/**
 * main - Prints all arguments recieved
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[]);
	}
	return (0);
}
