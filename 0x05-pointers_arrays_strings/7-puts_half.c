#include "main.h"

/**
 * puts_half -  function that prints half of a string, followed by a new line
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int p = 0;
	int q;

	while (str[p] != '\0')
	{
	p++;
	}
	if (p % 2 == 1)
	{
	q = (p - 1) / 2;
	q += 1;
	}
	else
	{
	q = p / 2;
	}

	for (; q < p; q++)
	{
	_putchar(str[q]);
	}
	_putchar('\n');
}
