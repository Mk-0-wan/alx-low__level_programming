#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: pointer to the first node in the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
