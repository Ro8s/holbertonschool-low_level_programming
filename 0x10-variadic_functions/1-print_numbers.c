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

	va_start(ap, n);
	if (separator == NULL || separator == '\0')
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
		printf("%d%s", va_arg(ap, unsigned int), separator);

	}
	va_end(ap);
}
