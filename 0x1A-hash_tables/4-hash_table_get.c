#include "hash_tables.h"

/**
 * hash_table_get - returns the actual value stored in that key
 * @ht: pointer to the created hash table
 * @key: position of the value in the hash table
 * Return: a pointer to the created memory
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/**
	 * use the key to get the actual value
	 * use the hash function to get the actual key of the value
	 * create a pointer to the bucket we are going to retrive from
	 * the index
	 * return a char pointer to the new value
	 */

	char *value;
	hash_node_t *bucket = NULL;
	ul indx = 0;

	if (!ht || !key || strcmp(key, ""))
		return (NULL);

	indx = key_index((unsigned char *)key, ht->size);
	if (ht->size < indx)
		return (NULL);

	bucket = ht->array[indx];

	if (bucket->next)
	{
		while (bucket->next)
			bucket = bucket->next;
	}

	if (!strcmp(bucket->key, key))
		return (value = strdup(bucket->value));

	return (NULL);
}
