#include "lists.h"
#include <signal.h>
#include <stddef.h>
/**
 * print_listint - printing all the list of elements
 * @h: node list
 * Return: number of Node elements
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		j++;
	}
	return (j);
}
