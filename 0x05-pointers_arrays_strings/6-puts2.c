#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: The string to be checked
 * Return: void
 */

void puts2(char *str)

{
	int p;
	int q = 0;
	while (str[q] != '\0')
	{
	q++;
	}

	for (p = 0; p < q; p +=2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
