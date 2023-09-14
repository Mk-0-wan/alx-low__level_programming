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
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
