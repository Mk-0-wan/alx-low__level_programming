#include "lists.h"
/**
 * listint_len- prints the number of elements in the list
 * @h: the node list
 * Return: only the number of list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int j = 0;
	/* Making a pointer to the current list */
	listint_t *curr = (listint_t *)h;

	/* only jump to the next node pointer until it is null */
	while (curr != NULL)
	{
		curr = curr->next;
		j++;
	}
	return (j);
}
