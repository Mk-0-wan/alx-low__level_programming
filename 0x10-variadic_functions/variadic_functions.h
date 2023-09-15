#ifndef _VARIADIC_FUNC_
#define _VARIADIC_FUNC_

/* Included libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Structure */
/**
 * struct format_specifier - Struct format_specifier
 *
 * @form: form to print out the value given
 * @call: The function associated
 */
typedef struct format_specifier
{
	char form;
	void (*call)(va_list *);
} format_x;

/* Function prototypes */
int _putchar(char s);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
