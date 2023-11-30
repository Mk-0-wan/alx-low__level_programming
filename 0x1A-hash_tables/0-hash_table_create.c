#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the total length of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(ul size)
{
	/**
	 * malloc new table with the size given
	 * malloc each hast table items and initalize them all to zero
	 * make checks for malloc if fails return NULL
	 */
	ul iter = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);

	/**
	 * for each array in the hash table we
	 * will need to allocate memory space to it
	 */
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * new_ht->size);

	if (!new_ht->array)
	{
		return (NULL);
	}

	/* setting each array value to NULL */
	while (iter < new_ht->size - 1)
	{
		new_ht->array[iter] = NULL;
		iter++;
	}

	return (new_ht);
}
