#include "lists.h"
/**
 * print_listint - printing all the list of elements
 * @h: node list
 * Return: number of Node elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int j = 0;
	/* make a new pointer to the list elements */
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		j++;
	}
	return (j);
}
