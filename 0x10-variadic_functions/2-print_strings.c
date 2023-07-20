#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints out the string arguments passed
 * @separator: delimeter of the string
 * @n: number of arguments
 * Return: void
 */
void print_strings(char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	/*number of integers can never be less than zero*/
	if (n > 0)
	{
		va_start(ap, n);
		/*start from the first argument*/
		for (i = 1; i <= n; i++)
		{
			/*store the strings in a pointer*/
			str = va_arg(ap, char*);
			/*check if the pointer is empty*/
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
			/*add separator*/
			if (separator != NULL && i != n)
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
	}
	printf("\n");
}
