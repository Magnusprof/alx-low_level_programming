#include "main.h"

/**
 * print_square - to prints a square of size
 * @size: size of the square
 * return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
