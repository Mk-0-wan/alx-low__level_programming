#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - frees all the node is the safest way possible
 * by only looping over the loop once
 * @h: pointer to the first node in the list
 * Return: length of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t n_nodes = 0;

	if (!*h || !(*h)->next)
		return (0);

	while (h)
	{
		n_nodes++;
		current = (*h)->next;
		free((*h));
		if (current && (void *)current < (void *)(*h))
		{
			*h = current;
		}
		else
			break;
	}
	*h = NULL;
	return (n_nodes);
}
