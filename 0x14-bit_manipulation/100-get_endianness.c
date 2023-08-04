#include "main.h"
/**
 * get_endianness - gets the endianness of the CPU running
 * if the first endianness is non-zero means its a little endian
 * otherwise its a big endian
 * Return: 1 little endian, 0 big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *)&x;

	return (s[0]);
}
