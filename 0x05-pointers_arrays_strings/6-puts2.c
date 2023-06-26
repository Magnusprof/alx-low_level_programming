#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: The string to be checked
 * Return: 0
 */

void puts2(char *str)

{
	int q = 0;

	while (str[q] != '\0')
	{
		for (q % 2 == 0)
		{
_putchar(str[q]);
	}
		q++;
}
_putchar('\n');
}
