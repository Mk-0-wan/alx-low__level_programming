#include "lists.h"
/**
 * add_dnodeint_end - adding node at the end
 * @head: pointer to the first node
 * @n: data for the new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = (*head);
	dlistint_t *new_node_end = NULL;

	if (!head)
		return (NULL);

	new_node_end = malloc(sizeof(dlistint_t));

	if (!new_node_end)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;
	new_node_end->prev = NULL;

	if (!(*head))
	{
		(*head) = new_node_end;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node_end;
		new_node_end->prev = current;
	}
	return (new_node_end);
}
