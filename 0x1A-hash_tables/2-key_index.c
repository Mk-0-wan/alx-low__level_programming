#include "hash_tables.h"

/**
 * int_key_index - returns the index value of
 * the hashed key in the hash table
 * @key: constant pointer to a string of chars to be hashed
 * @size: total length of the new hash table
 * Return: index of the newly created item
 */
ul key_index(const uc *key, ul size)
{
	ul indx = 0;
	ul hashed = 0;

	/* first find the hashed value from the key */
	hashed = hash_djb2(key);
	/* division hashing */
	indx = hashed % size;

	return (indx);
}
