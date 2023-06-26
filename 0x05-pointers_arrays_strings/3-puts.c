#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout
 * @str: pointer to the string
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
