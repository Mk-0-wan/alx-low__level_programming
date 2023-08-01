#include "lists.h"
/**
 * sum_listint - returns the total value of list
 * @head: list of all the node list
 * Return: return the sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
