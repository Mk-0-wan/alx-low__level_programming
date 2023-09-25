#include "lists.h"

/**
 * free_listint2 - frees the list and set the head to null
 * @head: pointer to the first node element
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL; /* change the head to NULL */
}
