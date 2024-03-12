#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: Name of file to process.
 * @letters: Number of letters that should be read and printed.
 * Return: Number of letters read and printed (SUCCESS), 0 (ERROR)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rdCount, wrCount;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rdCount = read(f, buf, letters);
	wrCount = write(STDOUT_FILENO, buf, rdCount);

	close(f);

	free(buf);

	return (wrCount);
}
