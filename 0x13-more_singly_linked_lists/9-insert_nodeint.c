#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - add new node at a given position
 * @head: pointer of the first node
 * @idx: indexed position for the targeted node
 * @n: value to store to the new node
 * Return: pointer to the new_node created, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_replacing_node;
	unsigned int i = 0;

	new_replacing_node = malloc(sizeof(listint_t));
	if (!new_replacing_node)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new_replacing_node->n = n;
	if (idx == 0)
	{
		new_replacing_node->next = *head;
		*head  = new_replacing_node;
		return (new_replacing_node);
	}
	current = *head;
	while (i < (idx - 1))
	{
		if (!current)
		{
			printf("Opps you have reached the end of the list\n");
			free(new_replacing_node);
			return (NULL);
		}
		current = current->next;/* move the current to the right position */
		i++;
	}
	if (!current)
	{
		printf("Opps you have reached the end of the list\n");
		free(new_replacing_node);
		return (NULL);
	}
	new_replacing_node->next = current->next; /* store the current node */
	current->next = new_replacing_node; /* make new_node point to it */
	return (new_replacing_node);
}
