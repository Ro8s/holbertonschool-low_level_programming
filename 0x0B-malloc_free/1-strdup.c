#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prints buffer in hexa
 * @str: the size of the memory to print
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 0;
	char *new;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	a++;
	new = malloc(sizeof(char) * a);
	if (new == NULL)
		return (NULL);
	for (; b <= a; b++)
		new[b] = str[b];

	return (new);


}
