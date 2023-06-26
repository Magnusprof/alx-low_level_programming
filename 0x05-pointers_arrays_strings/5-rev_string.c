#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, p, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	p = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - p - 1];
		s[length - p - 1] = s[p];
		s[p] = temp;
		p++;
	}
}


