#inlcude "main.h"
/**
 * _puts_recursion - a recursive function
 * accepting the arrguments
 * @s: acts as an array
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	s++;

	if (s[i] != '\0')
	{
		_print_recursion(s[i]);
	}
}
