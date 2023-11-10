#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of the list
 * @head: pointer to the first node in the list
 * @n: value for the new node
 * Return: pointer to the first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* first make the new node */
	dlistint_t  *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;


	if (!(*head))
	{
		(*head) = new_node;
	}
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	return (new_node);
}
