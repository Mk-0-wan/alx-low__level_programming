#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print out the arguments passed
 * @separator: used to separate each argument
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	/*number of intergers can never be negative*/
	if (n > 0)
	{
		va_start(ap, n);

		for (i = 1; i <= n; i++)
		{
			if (separator == NULL)
				return;
			printf("%d%s", va_arg(ap, int), separator);
		}
		va_end(ap);
	}
	printf("\n");
}
