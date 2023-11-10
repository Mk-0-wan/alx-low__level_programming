#include "lists.h"
#include <locale.h>
/**
 * get_dnodeint_at_index - returns a pointer of the indexed node
 * @head: pointer to the first node in the list
 * @index: position of the node to retrive
 * Return: node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t iter = 0;
	dlistint_t *current = head;
	dlistint_t *node_pos = NULL;

	if (!head)
		return (NULL);

	while (iter < index - 1 && current->next)
	{
		current = current->next;
		iter++;
	}
	node_pos = current->next;

	return (node_pos);
}
