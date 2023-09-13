#include "3-calc.h"
#include <stdio.h>

/**
 * _strcmp - compare strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 success 1 not same -1 fails
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}
/**
 * get_op_func - get the operation fucntion
 * @s: pointer to a string of char
 * Return: function to the matching operation passed
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (!_strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
