#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: if the substring is located - a pointer to the beginning
 * of the located substring.
 * if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		k = 0;
		if (haystack[k] == needle[k])
		{
		do {
			if (needle[k + 1] == '\0')
				return (haystack);

			k++;
		} while (haystack[k] == needle[k]);
		}
		haystack++;
	}
	return ('\0');
}
