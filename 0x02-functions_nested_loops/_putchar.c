#include <unistd.h>
/**
 * _putchar - writes the characters in the stdio
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned and erron is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
