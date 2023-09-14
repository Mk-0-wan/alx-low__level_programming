#include "variadic_functions.h"

/**
 * print_strings - simple variadic_functions that prints
 * all the string arguments passed
 * @separator: string which will separate arguments passed
 * @n: number of maximum arguments accepted
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *check;

	va_start(ap, n);

	i = 0;
	for (; i < n; i++)
	{
		check = va_arg(ap, char*);
		if (!check)
		{
			printf("(nil)");
		}
		else
			printf("%s", check);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
