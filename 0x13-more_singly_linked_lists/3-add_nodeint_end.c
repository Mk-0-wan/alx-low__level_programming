#include "lists.h"
/**
 * add_nodeint_end - adding new node at the end
 * @h: pointer to the node list
 * @n: value of each node
 * Return: address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *new_node;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
	{
		return (NULL);
	}

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
