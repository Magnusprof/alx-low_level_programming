#include "main.h"

/**
 * append_text_to_file - the function append text to a file.
 * @filename: pointer of the file.
 * @text_content: The string to add to the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int e, h, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	e = open(filename, O_WRONLY | O_APPEND);
	h = write(e, text_content, len);

	if (e == -1 || h == -1)
		return (-1);

	close(e);

	return (1);
}
