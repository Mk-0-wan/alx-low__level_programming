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
	dlistint_t *current = (*h);
	dlistint_t *inset_node = NULL;
	unsigned int iter = 0;

	if (!h)
		return (NULL);

	inset_node = malloc(sizeof(dlistint_t));
	if (!inset_node)
		return (NULL);
	/* now update the node */
	inset_node->n = n;
	inset_node->next = NULL;
	inset_node->prev = NULL;

	while (current)
	{
		if (iter == idx)
		{
			/* create the new node */
			/* now update the node list */
			inset_node->next = current->next;
			current->next = inset_node;
			inset_node->prev = current;
			return (inset_node);
		}
		iter++;
		current = current->next;
	}
	return (NULL);
}
