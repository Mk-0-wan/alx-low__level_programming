#include "lists.h"

/**
 * sum_listint - sums up all the values of the node int
 * @head: pointer to the first node in the list
 * Return: sum of all the node list value
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
	{
		printf("Appears you have an empty list\n");
		return (0);
	}

	current = head;
	while (current->next)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
