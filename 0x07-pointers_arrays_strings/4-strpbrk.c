#include "holberton.h"
#define NULL ((void *)0)

/**
 * *_strpbrk - pn
 * @accept: acpt
 * @s: ss
 *
 * Return: c
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b = 0;
	char *r;
	char *f = accept;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; f[b] != '\0'; b++)
		{
			if (s[a] == f[b])
			{
				r = &s[a];
				return (r);
			}
		}

	}
	return (NULL);




}
