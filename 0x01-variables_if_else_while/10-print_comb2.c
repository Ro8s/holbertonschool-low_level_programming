#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nm , num;
for (nm = 48 ; nm <= 57 ; nm++)
{
for (num = 48 ; num <= 57 ; num++) 
{
putchar(nm);
putchar(num);
if (nm != 9 && num != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
