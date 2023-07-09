#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, j, z, len, g, digit;

	k = 0;
	j = 0;
	z = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && g == 0)
	{
		if (s[k] == '-')
			++j;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			g = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			g = 0;
		}
		k++;
	}

	if (g == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
