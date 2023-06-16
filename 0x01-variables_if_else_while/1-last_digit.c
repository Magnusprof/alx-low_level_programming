#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program to prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
}
