#include "main.h"

/**
 * get_endianness - the function checks the size of a machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
