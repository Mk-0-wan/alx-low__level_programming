#include "3-calc.h"
#include <stdio.h>
#include <string.h>

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
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
