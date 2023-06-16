#include <stdio.h>
/**
 * main - to write a program prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{       
putchar(ch);
}       
putchar('\n');
return (0);
}
