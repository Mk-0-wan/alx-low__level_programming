#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds or updates the hash table with new
 * members
 * @key: pointer to a string of chars to calculate our hashed keys
 * @value: data to store in the hash table
 * @ht: the newly created hash table
 * Return: 1 if new elements were added to the hash table 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *bucket = NULL;
	char *tmp;
	hash_node_t *current = NULL;
	ul indx;

	if (!key || !ht || !*key || !ht->array || !value)
		return (0);
	/* create a new hash key */
	indx = key_index((const unsigned char *)key, ht->size);
	/* check if the index already exists */
	current = ht->array[indx];
	if (!current)
	{
		/* assign new value to that array indx */
		ht->array[indx] = bucket;
		return (1);
	}
	else
	{
		if (!strcmp(current->key, key))
		{/* Updating the original value */
			tmp = strdup(value);
			if (!tmp)
				return (0);
			free(current->value);
			current->value = tmp;
		}
		else
		{/*check if there is a collision*/
			bucket = buckets(key, value);
			if (!bucket)
				return (0);
			bucket->next = current;
			ht->array[indx] = bucket;
		}
		return (1);
	}
	return (0); /* fail */
}
/**
 * buckets - creates a new elements in the hash table
 * @key: key used to return the current int position for
 * new element
 * @value: data to be stored at that current position
 * Return: pointer to the newly created node element
 */
hash_node_t *buckets(const char *key, const char *value)
{
	hash_node_t *bucket = malloc(sizeof(hash_node_t));

	if (!bucket)
		return (NULL);

	bucket->key = strdup(key);
	bucket->value = strdup(value);
	bucket->next = NULL;
	if (!bucket->key || !bucket->value)
		return (NULL);
	/* don't forget to free all of them once done using them */
	return (bucket);
}
