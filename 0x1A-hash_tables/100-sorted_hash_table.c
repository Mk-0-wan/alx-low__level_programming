#include "hash_tables.h"

/**
 * shash_table_create - create a new hash table which is a doubly
 * linked list
 * @size: size of the new array
 * Return: a newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table_t *new_ht = malloc(sizeof(shash_table_t));
	ul iter = 0;

	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(shash_node_t *) * new_ht->size);

	if (!new_ht->array)
	{
		return (NULL);
	}

	while (iter < new_ht->size)
	{
		new_ht->array[iter] = NULL;
		iter++;
	}

	return (new_ht);
}
