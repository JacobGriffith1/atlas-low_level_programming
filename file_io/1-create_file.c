#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to create.
 * @text_content: String to write to the file.
 * Return: 1 (SUCCESS), -1 (ERROR)
 */

int create_file(const char *filename, char *text_content)
{
	int f, letCount, rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letCount = 0; text_content[letCount]; letCount++)
		;

	rwr = write(f, text_content, letCount);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
