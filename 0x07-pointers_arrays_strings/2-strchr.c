#include "main.h"

/**
 * _strchr - to locates a character in a string
 * @s: is the string to be searched.
 * @c: is the character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * if c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
	if (s[a] == c)
		return (s + a);
}
return ('\0');
}
