#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all datatype formats
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *delimiter = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])/*switch according to the format given*/
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", delimiter, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", delimiter, va_arg(args, double));
					break;
				case 's':
					/*set and check string*/
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", delimiter, str);
					break;
				default:
					i++;
					continue;
			}
			delimiter = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
