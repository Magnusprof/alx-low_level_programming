#include "main.h"

/**
 * get_endianness - the function checks the endianness
 * of the machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
