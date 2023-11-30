#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the total length of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/**
	 * malloc new table with the size given
	 * malloc each hast table items and initalize them all to zero
	 * make checks for malloc if fails return NULL
	 */
	hash_table_t *new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);
	/**
	 * for each array in the hash table we
	 * will need to allocate memory space to it
	 */
	new_ht->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	if (!new_ht->array)
		return (NULL);

	return (new_ht);
}
