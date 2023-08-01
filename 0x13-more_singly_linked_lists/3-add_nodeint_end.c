#include "lists.h"
/**
 * add_nodeint_end - adding new node at the end
 * @h: pointer to the node list
 * @n: value of each node
 * Return: address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	if (curr != NULL)
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
