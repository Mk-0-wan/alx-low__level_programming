#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to the first node
 * @index: node position to remove
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t iter = 0;
	int flag = -1;

	if (!head || !*head)
	{
		return (flag);
	}
	else
	{
		while (current && index != iter)
		{
			current = current->next;
			iter++;
		}
		if (!current)
			return (flag);
		if (current->next)
			current->next->prev = current->prev;
		if (index == 0)
			(*head) = current->next;
		else
			current->prev->next = current->next;
		free(current);
		return (flag * -1);
	}
	return (flag);
}
