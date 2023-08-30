#include "main.h"
/**
 * _puts_recursion - replica of puts function
 * @s: pointer to a string of chars
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int x = 0;

	/* check if the string is empty */
	if (!s)
		return;
	if (*(s) == '\0')
	{
		_putchar('\n'); /* replace null terminator with a new line char */
		return;
	}
	_putchar(s[x]); /* write the value at that current position */
	s = (s + 1); /* update the pointer to the next pointer */
	/* s[0] == s, (s + 1) == s[1], (s + 2) == s[2],... */
	/* or an easier alternative s++ */
	_puts_recursion(s);
	/* keep on calling until you reach the end of the string */
}
