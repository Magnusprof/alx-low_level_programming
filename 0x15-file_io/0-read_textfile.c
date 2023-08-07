#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that read and print
 * text file print to Standard output.
 * @filename: read the text file
 * @letters: numb of letters to be read
 * Return: k- actual numb of bytes read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t k;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (k);
}
