#include "main.h"

/**
 * _memcpy - to Write a function that copies memory area @src
 * to memory area @dest
 *
 * @n: function to copy
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
