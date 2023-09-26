#include "lists.h"
#include <complex.h>
#include <stdalign.h>
/**
 * print_listint_safe - print a node list while avoiding a while
 * loop and looping only
 * once on the list
 * @h: pointer to the first node in the list
 * Return: no_of_nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t n_nodes = 0, index = 0;
	const listint_t *fast = NULL, *slow = NULL;

	fast = h;
	if (!h)
		return (n_nodes);
	while (fast)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		n_nodes++;
		fast = fast->next;
		slow = h;
		while (index < n_nodes)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (n_nodes);
			}
			slow = slow->next;
			index++;
		}
	}
	return (n_nodes);
}
