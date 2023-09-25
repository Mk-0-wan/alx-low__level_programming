#include "lists.h"
#include <stdalign.h>

/**
 * print_listint_safe - prints all the node list elements (safe version)
 * @head: pointer of the first node element of the node list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_of_nodes = 0;
	const listint_t *fast = NULL, *loop_node = NULL;

	fast = head;
	if (!head)
		exit(98);

	while (fast)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		fast = fast->next;
		no_of_nodes++;

		if (fast && fast->next && fast->next == fast && no_of_nodes > 2)
		{
			loop_node = fast;
			printf(" --> [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}
	}
	return (no_of_nodes);
}
