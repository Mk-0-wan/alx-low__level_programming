#include "main.h"
#include <unistd.h>

/**
 * _putchar - writing single characters
 * @c: placeholder for the char passed
 * Return: 0 (success)
 */
int _putchar(char c)
{
	return (write(STDIN_FILENO, &c, 1));
}
