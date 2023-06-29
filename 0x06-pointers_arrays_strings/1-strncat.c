#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: source of string pointer
 * @dest: destination of string pointer
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, p;
/* p is a counter for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
	length_of_string++;
	}
	for (p = 0; p < n && src[p] != '\0'; p++, length_of_string++)
	{
		dest[length_of_string] = src[p];
	}
	dest[length_of_string] = '\0';
	return (dest);
}

