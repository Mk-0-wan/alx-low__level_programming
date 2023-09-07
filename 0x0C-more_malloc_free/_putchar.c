#include "main.h"

/**
 * _putchar - output a single char to the std-output
 * @c: single character
 * Return: -1 (error) 1 (success)
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
