#include "main.h"
/**
 * _puts_recursion - a recursive function
 * accepting the arrguments
 * @s: acts as an array
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	unsigned int i =0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
