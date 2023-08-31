#include "main.h"

/**
 * get_bit - the function returns the value of a
 * bit at an index in a decimal number
 * @n: num to search
 * @index: index of d bit
 *
 * Return: value of d bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
