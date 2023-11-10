#include "lists.h"
#include <threads.h>

/**
 * sum_dlistint - sums up all the node list data
 * @head: pointer to the first node in the list
 * Return: sum of all the node list data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current = head;

	if (!head)
		return (0);

	while (current)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
