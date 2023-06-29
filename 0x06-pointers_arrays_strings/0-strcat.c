#include "main.h"


/**
 * _strcat - the function that concatenates two strings.
 * @src: the source string pointer
 * @dest:  the destination string pointer
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
int length_of_string, p;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (p = 0; src[p] != '\0'; p++, length_of_string++)
{
dest[length_of_string] = src[p];
}
dest[length_of_string] = '\0';
return (dest);
}
