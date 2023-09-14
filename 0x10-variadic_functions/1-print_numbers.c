#include "variadic_functions.h"
/**
 * print_numbers - simple variadic_functions that prints
 * all the arguments passed
 * @separator: string which will separate arguments passed
 * @n: number of maximum arguments accepted
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (!separator)
		return;
	va_start(ap, n);
	i = 0;
	for (; i < n; i++)
	{

		printf("%d", va_arg(ap, unsigned int));

		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	_putchar('\n');
}
