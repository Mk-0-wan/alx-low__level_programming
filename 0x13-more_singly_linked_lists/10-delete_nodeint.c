#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deleting node at a given position
 * @head: pointer to the first node in the list
 * @index: position of the indexed node in the list
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;


	if (!*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < (index - 1))
	{
		current = current->next;
		if (!current)
		{
			return (-1);
		}
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
