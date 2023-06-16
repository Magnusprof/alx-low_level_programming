#include <stdio.h>
/**
 * main - A program to prints all possible different
 * combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int p, q;
for (p = 48; p <= 56; p++)
{
for (q = 49; q <= 57; q++)
{
if (q > p)
{
putchar(p);
putchar(q);
if (p != 56 || q != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
