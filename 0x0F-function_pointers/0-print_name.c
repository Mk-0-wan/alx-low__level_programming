#include "function_pointers.h"

/**
 * print_name - simple function pointer which prints a string of chars.
 * @name: pointer to string of chars aka {name given}
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *x))
{
	if (!name || !f)
		return;
	f(name);
}
