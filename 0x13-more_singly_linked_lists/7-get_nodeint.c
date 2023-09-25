#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - retrive the node at a given index
 * @head: pointer to the first node element
 * @index: index of each element in the linked list
 * Return: pointer to the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *index_node;
	unsigned int i = 0;

	if (!head) /* check for empty list */
	{
		printf("Appears you have an empty list\n");
		return (NULL);
	}
	current = head;
	while (i < (index - 1)) /* move one step back then one ahead */
	{
		if (!current->next)
		{
			printf("You have reached the end of the list\n");
			return (NULL);
		}
		current = current->next;
		i++;
	}
	index_node = current->next;/* found node */
	return (index_node);
}
