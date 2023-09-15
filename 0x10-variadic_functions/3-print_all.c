#include "variadic_functions.h"

/**
 * _char_arg - prints only char arguments
 * @ap: list of indefinite number of arguments
 * Return: void only prints out expected result
 */
void _char_arg(va_list *ap)
{
	char c;

	c = va_arg(*ap, int);
	printf("%c", c);
}
/**
 * _int_arg - prints only integer arguments
 * @ap: list of indefinite number of arguments
 * Return: void only prints out expected result
 */

void _int_arg(va_list *ap)
{
	int i;

	i = va_arg(*ap, int);
	printf("%d", i);
}
/**
 * _float_arg - prints only float arguments
 * @ap: list of indefinite number of arguments
 * Return: void only prints out expected result
 */

void _float_arg(va_list *ap)
{
	float f;

	f = va_arg(*ap, double);
	printf("%f", f);
}
/**
 * _string_arg - prints only string arguments
 * @ap: list of indefinite number of arguments
 * Return: void only prints out expected result
 */

void _string_arg(va_list *ap)
{
	char *s;

	s = va_arg(*ap, char *);

	/* check for empty strings */
	if (!s || *s == '\0')
		s = "(nil)";

	printf("%s", s);
}
/**
 * print_all - prints all datatype pass
 * @format: string pointer
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int form_type_no, i = 0;
	char *separator = "";
	format_x data[] = {
		{'c', _char_arg},
		{'i', _int_arg},
		{'f', _float_arg},
		{'s', _string_arg},
		{0, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		/* return the first position you find a match */
		form_type_no = 0;
		while (data[form_type_no].form)
		{
			/* found form_type_no do this then */
			if (format[i] == data[form_type_no].form)
			{
				printf("%s", separator);
				data[form_type_no].call(&ap);
				separator = ", ";
				break;
			}
			form_type_no++;
		}
		i++; /* move to the next char in line */
	}
	va_end(ap);
	printf("\n");
}
