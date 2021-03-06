#include "variadic_functions.h"

/**
 * print_strings - suma toda gato
 * @separator: divorcio
 * @n: nnnnnnnnnnnnnnnnnnnnn
 * Return: e vacio viejo
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int a;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (a = 0; a < n; a++)
			printf("%s", va_arg(ap, char *));
		printf("\n");
		return;
	}
	for (a = 0; a < n; a++)
	{
		if ((a + 1) == n)
		{
			printf("%s\n", va_arg(ap, char *));
			return;
		}
		printf("%s%s", va_arg(ap, char *), separator);
	}
	printf("\n");
	va_end(ap);
}
