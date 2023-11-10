#include "lists.h"
#include <complex.h>
/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: pointer to the first node of the list
 * @idx: insert node at that index
 * @n: node new value
 * Return: pointer to the new node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *inset_node = NULL;
	unsigned int iter = 1;

	if (!*h)
		return (NULL);

	inset_node = malloc(sizeof(dlistint_t));
	if (!inset_node)
		return (NULL);

	inset_node->n = n;
	inset_node->next = NULL;
	inset_node->prev = NULL;

	if (idx == 0)
	{
		inset_node->next = *h;
		if (*h)
			(*h)->prev = inset_node;
		*h = inset_node;
		return (inset_node);
	}

	while (current)
	{
		if (iter == idx)
		{
			inset_node->next = current->next;
			current->next = inset_node;
			inset_node->prev = current;
			return (inset_node);
		}
		current = current->next;
		iter++;
	}
	if (!current)
		free(inset_node);
	return (NULL);
}
