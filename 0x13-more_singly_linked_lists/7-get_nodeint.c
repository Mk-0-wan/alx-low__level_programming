#include "lists.h"
/**
 * get_nodeint_at_index - returns the node element at the given index
 * @head: the entire node list
 * @index: position of the node
 * Return: returns the corresponding node to the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr;

	if (!head) /* check if the node list is empty */
	{
		return (NULL);
	}
	curr = head; /* assign the current to the header node(first node) */
	while (curr)
	{
		if (count == index)
		{
			return (curr); /* return the node at the matched index point */
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
