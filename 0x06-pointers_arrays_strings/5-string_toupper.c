#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 * @s: aaa
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int a = 0;
int i;
while (s[a] != '\0')
a++;
for (i = 0; i < a; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
