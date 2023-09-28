#include "main.h"

/**
 * get_edianness - checks the endianess of  the CPU running
 * Return: 0 if big edian, 1 if little edian
 */
int get_endianness()
{
	unsigned int ed = 1;
	char *ptr = (char *)&ed;

	if (ptr)
		return (1);
	return (0);
}
