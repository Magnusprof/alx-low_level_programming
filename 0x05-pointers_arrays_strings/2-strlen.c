#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{

int string_length = 0;

while (*s != '\0')
{
string_length++;
s++;
}
return (string_length);
}
