#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
