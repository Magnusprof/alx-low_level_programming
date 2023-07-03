#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * if noset is matvhed - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
