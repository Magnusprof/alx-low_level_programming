#include "main.h"

/**
 * _strspn - to Write a function that gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which consists only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				bytes++;
				break;
			}
		else if (accept[k + 1] == '\0')
		return (bytes);
		}
s++;
}
return (bytes);
}
