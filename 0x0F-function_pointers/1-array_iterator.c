#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - the program write a function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
