#include "lists.h"
/**
 * list_len - counts the number of elements
 * @h: pointer to the first element in the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int j = 0;

	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		curr = curr->next;
		j++;
	}
	return (j);
}
