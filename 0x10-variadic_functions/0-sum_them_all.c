#include "variadic_functions.h"
/**
 * sum_them_all - operates a summation of all the arguments passed
 * @n: number of accepted arguments
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	_putchar('\n');
	return (sum);
}
