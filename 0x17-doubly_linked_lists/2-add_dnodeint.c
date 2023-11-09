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
	dlistint_t  *new_node = malloc(sizeof(dlistint_t));


	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		return (new_node);
	}
	else
	{
		/* place it where it should be */
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	return (new_node);
}
