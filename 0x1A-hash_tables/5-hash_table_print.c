#include "hash_tables.h"
#include <endian.h>

/**
 * hash_table_print - prints all the buckets in the hash table
 * @ht: pointer to the newly created hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	ul iter = 0, flag = 0;
	hash_node_t *buckets = NULL;

	if (!ht)
		printf("{}\n");

	printf("{");
	while (++iter < ht->size)
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
	}
	printf("}\n");
}
