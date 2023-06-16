#include <stdio.h>
/**
 * main - A program to prints all possible different
 * combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int p, q, r;
for (p = 40; p < 48; p++)
{
for (q = 41; q < 48; m++)
{   
for (r = 42; r < 48; l++)
{       
if (r > q && q > p)
{      
putchar(p);
putchar(q);
putchar(r);
if (p != 47 || q != 48)
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

