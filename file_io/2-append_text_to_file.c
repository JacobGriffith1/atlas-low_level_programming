#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append to the file.
 * Return: 1 (SUCCESS), -1 (FAILURE)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, letCount, rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (letCount = 0; text_content[letCount]; letCount++)
			;

		rwr = write(f, text_content, letCount);

		if (rwr == -1)
			return (-1);
	}
	close(f);

	return (1);
}
