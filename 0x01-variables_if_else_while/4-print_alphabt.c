#include <stdio.h>
#include <stdlib.h>
#include <time.h
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
if (ch == 'e' || ch == 'q')
ch++;
}
return (0);
}
