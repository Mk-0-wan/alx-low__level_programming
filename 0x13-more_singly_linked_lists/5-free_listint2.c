#include "lists.h"
/**
 * free_listint2 - free all the nodes in the list
 * @head: node list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *temp;

	if (!head)
	{
		return;
	}

	curr = *head;

	while (curr != NULL)
	{
		temp = curr;
		curr = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
