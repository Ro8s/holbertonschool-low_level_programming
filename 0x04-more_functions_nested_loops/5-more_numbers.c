#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int n1;
int n2;
for (n1 = 0; n1 <= 9; n1++)
{
for (n2 = 0; n2 <= 14; n2++)
{
int u = n2 % 10;
int d = n2 / 10;
if (d == 1)
{
_putchar(d + '0');
}
_putchar(u + '0');
}
_putchar('\n');
}
}
