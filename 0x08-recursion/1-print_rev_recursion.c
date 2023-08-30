#include "main.h"
#include <linux/limits.h>
/**
 * _print_rev_recursion - reverse recursion
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	int x = 0;

	if (!s)
		return;
	if (*(s) == 0)
	{
		s[x] = '\n';
		return;
	}
	_putchar(s[x]);
	s = (s - 1);
	_print_rev_recursion(s);
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
