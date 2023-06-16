#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
for (l = 0; l < 9; l++)
{
putchar(l);
if (l != 8)
{
putchar(',');
putchar(' ');
}
putchar('\l');
return (0);
}
