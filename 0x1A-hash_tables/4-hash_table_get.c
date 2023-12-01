#include "hash_tables.h"

/**
 * hash_table_get - returns the actual value stored in that key
 * @ht: pointer to the created hash table
 * @key: position of the value in the hash table
 * Return: a pointer to the created memory
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	hash_node_t *bucket = NULL;
	ul indx = 0;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (ht->size <= indx)
		return (NULL);

	bucket = ht->array[indx];
	if (!bucket)
		return (NULL);

	if (bucket->next)
	{
		while (bucket->next)
			bucket = bucket->next;
	}

	if (!strcmp(bucket->key, key))
	{
		value = strdup(bucket->value);
		if (!value)
			printf("Something is wrong\n");
		return (value);
	}
	return (NULL);
}
