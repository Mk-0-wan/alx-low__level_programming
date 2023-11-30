#include "hash_tables.h"

/**
 * hash_djb2 - hash function that returns us the hashed value
 *
 * Best known for efficient distribution of items and also
 * less collisions
 *
 * @str: pointer to a string of char to be hashed
 * Return: a new hashed value
 */
ul hash_djb2(const unsigned char *str)
{
	int ch;
	ul hashed;

	while ((ch = *str++))
		hashed = (hashed * 33) + ch;

	return (hashed);
}
