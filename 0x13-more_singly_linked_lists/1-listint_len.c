#include "lists.h"
#include <stddef.h>

/**
 * listint_len - return the len of a given linked list
 * @h: pointer to the first node in the list
 *
 * check if linked list is empty
 * make a loop over the list
 * keep on iterating until you reach the end of the list
 * record the number of nodes
 *
 * Return: no_of_nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int node_len = 0;

	if (!h)
	{
		printf("Appears you have an empty list\n");
		return (-1);
	}

	while (h)
	{
		h = h->next;
		node_len++;
	}
	return (node_len);
}
