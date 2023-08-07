#include "main.h"

/**
 * append_text_to_file - The function about to be creates
 * append text at d end of a file.
 * @filename: is a pointer of d file to d name.
 * @text_content: is d string that will be added to d end of d file.
 *
 * Return: 1 is for success, if the file exist, -1 for failure of the
 * function or the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	k = write(p, text_content, len);

	if (p == -1 || k == -1)
		return (-1);

	close(p);

	return (1);
}
