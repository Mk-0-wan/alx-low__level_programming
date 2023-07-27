#include "lists.h"
/**
 * add_node_end - adding a new node at the end of the linked list
 * @head: the node list
 * @str: the data value
 * Return: the last node added in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *last_Node = malloc(sizeof(list_t));
	list_t *curr = *head;


	while (str[i])
	{
		i++;
	}

	if (last_Node == NULL)
	{
		return (NULL);
	}

	last_Node->next = NULL;
	last_Node->str = strdup(str);
	last_Node->len = i;

	if (*head == NULL)
	{
		*head = last_Node;
		return (last_Node);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = last_Node;

	return (last_Node);
}
