#include "hash_tables.h"

/**
 * hash_table_delete - frees up the memory of the hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	ul iter = 0;

	if (!ht || !ht->array)
		return;

	for (; iter < ht->size; iter++)
		free_hash_nodes(ht->array[iter]);

	free(ht->array);
	free(ht);
}

/**
 * free_hash_nodes - frees the doubly linked list
 * @head: pointer to the first node in the list
 * Return: void
 */
void free_hash_nodes(hash_node_t *head)
{
	if (!head)
		return;

	if (head)
	{
		free_hash_nodes(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}
