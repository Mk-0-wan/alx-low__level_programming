#include "main.h"
#include <limits.h>

/**
 * binary_to_uint - transforms string binary to int.
 * @b: pointer to a memory location containing bit representation of number
 * Return: digit value of the binary representation
 */
unsigned int binary_to_uint(const char *b)
{
	uli dec = 0;
	uli i = 0;
	char *local;


	if (!b)
		return (0);

	local = (char *)b;

	while (local[i] != '\0')
	{
		if (local[i] != '1' && local[i] != '0')
			return (0);

		dec = dec * 2 + (local[i] - '0');
		i++;
	}
	return (dec);
}
