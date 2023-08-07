#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - the function is to allocates 1024 bytes for a buffer.
 * @file: This file is d  name of the file buffer is storing chars for.
 *
 * Return:it will be the newly-allocated buffer pointer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - the function is to closes file descriptors
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the function is to copy d content of a file to anoda file.
 * @argc: The num of arguments supplied to the program.
 * @argv: Is an array of argument to a pointer.
 *
 * Return: success 0
 *
 * Description: If d argument count is incorrect then exit code 97.
 * If file_from does not exist or cannot be read then exit code 98.
 * If file_to cannot be created or written to then exit code 99.
 * If file_to or file_from cannot be closed then exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, f, k, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(f, buffer, k);
		if (f == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		k = read(from, buffer, 1024);
		f = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buffer);
	close_file(from);
	close_file(f);

	return (0);
}
