#include <stdio.h>
/**
 * main - A program to prints all possible different
 * combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int p, q, r;
for (p = 40; p < 68; p++)
{
for (q = 41; q < 68; q++)
{
for (r = 42; r < 68; r++)
{
if (r > q && q > p)
{
putchar(p);
putchar(q);
putchar(r);
if (p != 57 || q != 68)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
