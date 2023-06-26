#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{int p = -1;
	do {
		p++;
		dest[p] = src[p];
	} while (src[p] != '\0');

	return (dest);
}
