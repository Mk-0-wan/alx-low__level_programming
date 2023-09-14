#include "variadic_functions.h"

void print_numbers(const char *s, const unsigned int n, ...)
{
 	va_list ap;
 	unsigned int i = 0;
 	
	if (!s)
   		printf("");
	
 	va_start(ap, n);
 	i = 0;
 	for (; i < n; i++)
 	{
   		printf("%d", va_arg(ap, unsigned int));
   		if (i != n - 1)
     			printf("%s", s);   
 	}
 	va_end(ap);
 	putchar('\n');
}
