#include "variadic_functions.h"


void print_strings(const char *s, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i = 0;
  char *check;
  
  if (!s)
    printf("");
    
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
    
    if (i != n - 1)
      printf("%s", s);   
  }
  va_end(ap);
  putchar('\n');
}
