#include "main.h"

/**
 * error_file - Checks if file can be read and written to.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: Arguments vector
 * Return: N/A
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of one file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t charCount, wrCount;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from filr_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	charCount = 1024;
	while (charCount == 1024)
	{
		charCount = read(file_from, buf, 1024);
		if (charCount == -1)
			error_file(-1, 0, argv);
		wrCount = write(file_to, buf, charCount);
		if (wrCount == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
