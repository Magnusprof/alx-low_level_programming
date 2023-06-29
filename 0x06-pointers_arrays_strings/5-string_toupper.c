#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @a: pointer to string
 *
 * Return: pointer to uppercaes string
 */

char *string_toupper(char *a)
{
	int length_of_string;

	length_of_string = 0;

	while (a[length_of_string] != '\0')
	{
		if (a[length_of_string] >= 97 && a[length_of_string] <= 122)
		{
			a[length_of_string] = a[length_of_string] - 32;
		}
		length_of_string++;
	}
	return (a);
}
