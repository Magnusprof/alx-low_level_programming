#include "main.h"

/**
 * create_file - the function is to Creates a file.
 * @filename: is a pointer to the name of the created file
 * @text_content: Is a pointer to write to the file of a string.
 *
 * Return: -1 if it fail, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int m, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(m, text_content, len);

	if (m == -1 || k == -1)
		return (-1);

	close(m);

	return (1);
}
