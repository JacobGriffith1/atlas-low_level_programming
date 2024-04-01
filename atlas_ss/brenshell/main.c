#include "shell.h"

/**
 * main - Main function
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	/* Load config files, if any */

	/* Run command loop. */
	lsh_loop();

	/* Perform any shutdown/cleanup */
	return EXIT_SUCCESS;
}
