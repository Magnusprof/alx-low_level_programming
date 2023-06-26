#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int reverse = 0;
	int p;

	while (*s != '\0')
	{
		reverse++;
		s++;
	}
	s--;
	for (p = reverse; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
