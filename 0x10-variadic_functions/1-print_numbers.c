#include "variadic_functions.h"

/**
 * print_numbers - printea numeros
 * @n: nums
 * @separator: separador
 * Return: nalga
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	unsigned int b;
	int d = 0;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (b = 0; b < n; b++)
			printf("%d", va_arg(ap, unsigned int));
		printf("\n");
		return;
	}
	for (a = 0; a < n; a++)
	{
		if ((a + 1) == n)
		{
			printf("%d\n", va_arg(ap, unsigned int));
			break;
		}
		printf("%d", va_arg(ap, unsigned int));
		for (d = 0; separator[d] != '\0'; d++)
			printf("%c", separator[d]);

	}
}
