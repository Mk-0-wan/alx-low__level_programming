#ifndef __HASH_TABLES__
#define __HASH_TABLES__

/* C standard library */
#include <stdio.h> /* for printf */
#include <stdlib.h> /* for malloc */
#include <string.h> /* for strcpy */

/*aliases*/
typedef unsigned long int ul;
typedef unsigned char uc;
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(ul size);
ul hash_djb2(const uc *str);
ul key_index(const uc *key, ul size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void free_all_buckets(hash_node_t *buckets);
void free_hash_table(hash_table_t *ht);

#endif
