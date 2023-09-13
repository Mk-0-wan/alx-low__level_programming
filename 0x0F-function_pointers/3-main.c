#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _atoi - converting string to int
 * @s: pointer to a string
 * Return: converted value or 0 on error
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

/**
 * _putchar - a replica of the putchar function
 * @c: character parameter
 * Return: -1 (error) 1 (success)
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * _puts_recursion - replica of puts function
 * @s: pointer to a string of chars
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int x = 0;

	if (!s)
		return;
	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	s = (s + 1);
	_puts_recursion(s);
}

/**
 * main - just performs a function call
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	op_t opx;
	int x, y, result = 0;

	if (argc < 4)
	{
		_puts_recursion("Error\n");
		exit(98);
	}
	opx.op = argv[2];
	if (_strcmp(argv[2], opx.op) != 0)
	{
		_puts_recursion("Error\n");
		return (99);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[3]);

	opx.f = get_op_func(argv[2]);
	if (opx.f)
	{
		result = opx.f(x, y);
		printf("%d\n", result);
	}
	return (0);
}
