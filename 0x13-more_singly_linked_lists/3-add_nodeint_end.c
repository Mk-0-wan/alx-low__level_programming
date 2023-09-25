#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: address of the head pointer
 * @n: value to store to the new node
 * Return: pointer to the new node created at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head, *new_node;

	/* create the new_node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	/* set values to the node */
	new_node->n = n;
	new_node->next = NULL;

	/* check if list was empty */
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	/* otherwise update the node list with new node */
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
