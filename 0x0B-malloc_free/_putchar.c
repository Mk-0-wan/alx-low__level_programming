#include "main.h"
/**
 * _putchar - a replica of the putchar function
 * @c: character parameter
 * Return: -1 (error) 1 (success)
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

