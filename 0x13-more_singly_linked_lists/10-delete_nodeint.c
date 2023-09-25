#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - removes the head node
 * @head: pointer to the first node
 * Return: head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int ret = 0;

	new_node = (*head)->next; /* store the next node */
	ret = (*head)->n; /* collect head node val */
	free(*head);
	*head = new_node; /* make new node the new head node */
	return (ret);
}

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

	if (index == 0)
	{
		pop_listint(head);
	}

	temp = NULL;
	current = *head;
	while (i < (index - 1))
	{
		if (!current)
		{
			return (-1);
		}
		current = current->next;
	}
	if (!current)
	{
		printf("Opps you have reached the end of the list\n");
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
