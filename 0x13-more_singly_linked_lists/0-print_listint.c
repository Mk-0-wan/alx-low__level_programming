#include "lists.h"
#include <stddef.h>
#include <unistd.h>

/**
 * print_listint - prints all nodes in the linked list
 * @h: pointer to the head node.
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int no_nodes = 0;
	const listint_t *current = NULL;

	current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		no_nodes++;
	}
	return (no_nodes);
}
