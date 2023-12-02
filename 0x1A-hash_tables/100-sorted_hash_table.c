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

/**
 * shash_table_set - adds or updates the hash table with new
 * members
 * @key: pointer to a string of chars to calculate our hashed keys
 * @value: data to store in the hash table
 * @ht: the newly created hash table
 * Return: 1 if new elements were added to the hash table 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	char *tmp;
	shash_node_t *bucket = NULL, *current = NULL;
	ul indx;

	if (!key || !ht || !*key || !ht->array || !value)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[indx];
	while (current)
	{
		if (!strcmp(current->key, key))
		{
			tmp = strdup(value);
			if (!tmp)
				return (0);
			free(current->value);
			current->value = tmp;
			return (1);
		}
		current = current->next;
	}
	bucket = sbuckets(key, value);
	if (!bucket)
		return (0);
	bucket->next = ht->array[indx];
	ht->array[indx] = bucket;
	return (1);
}
/**
 * sbuckets - creates a new elements in the hash table
 * @key: key used to return the current int position for
 * new element
 * @value: data to be stored at that current position
 * Return: pointer to the newly created node element
 */
shash_node_t *sbuckets(const char *key, const char *value)
{
	shash_node_t *bucket = malloc(sizeof(shash_node_t));

	if (!bucket)
		return (NULL);

	bucket->key = strdup(key);
	if (!bucket->key)
	{
		free(bucket);
		return (NULL);
	}
	bucket->value = strdup(value);
	if (!bucket->value)
	{
		free(bucket->key);
		free(bucket);
		return (NULL);
	}
	bucket->next = NULL;
	return (bucket);
}

/**
 * shash_table_get - returns the actual value stored in that key
 * @ht: pointer to the created hash table
 * @key: position of the value in the hash table
 * Return: a pointer to the created memory
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	char *value;
	shash_node_t *bucket = NULL;
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
			printf("Setting up went wrong\n");
		return (value);
	}
	return (NULL);
}

/**
 * shash_table_print - prints all the buckets in the hash table
 * @ht: pointer to the newly created hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	ul iter = 0, flag = 0;
	shash_node_t *buckets = NULL;

	if (!ht || !ht->array || ht->size == 0)
		return;
	printf("{");
	while (iter < ht->size)
	{
		buckets = ht->array[iter];
		while (buckets)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", buckets->key, buckets->value);
			/* separate nodes in the buckets key value pairs */
			buckets = buckets->next;
			flag = 1;
		}
		iter++;
	}
	printf("}\n");
}


/**
 * shash_table_delete - frees up the memory of the hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	ul iter = 0;

	if (!ht || !ht->array)
		return;

	for (; iter < ht->size; iter++)
		free_shash_nodes(ht->array[iter]);

	free(ht->array);
	free(ht);
}

/**
 * free_shash_nodes - frees the doubly linked list
 * @head: pointer to the first node in the list
 * Return: void
 */
void free_shash_nodes(shash_node_t *head)
{
	if (!head)
		return;

	if (head)
	{
		free_shash_nodes(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}
