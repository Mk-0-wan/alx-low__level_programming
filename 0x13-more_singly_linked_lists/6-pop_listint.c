#include "lists.h"
/**
 * pop_listint - function which removes the header element
 * @head: the whole node list
 * Return: value of the header node list
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int num = 0;

	if ((*head) == NULL || !head)
	{
		return (0);
	}

	curr = *head;
	num = curr->n;
	(*head) = (*head)->next;
	free(curr);
	return (num);
}
