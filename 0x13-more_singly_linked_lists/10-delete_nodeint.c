#include "lists.h"
/**
 * delete_nodeint_at_index - removes the node correspoinding to the index given
 * @head: The entire node list
 * @index: position of the node to be deleted
 * Return: 1 (Success) -1 (Faild)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev, *node;

	if (!*head)
	{
		return (-1);
	}

	prev = *head;
	if (index == 0) /*when the node list is empty*/
	{
		node = prev->next; /*copy the prev pointer over to node*/
		*head = node; /*make it be the first element in the node list*/
		free(prev);
		return (1);
	}
	while (prev)
	{
		if (count + 1 == index) /*keep count until you reach the value index*/
		{
			node = prev->next;
			prev->next = node->next;
			free(node);
			return  (1);
		}
		prev = prev->next;
		count++;
	}
	return (-1); /*if the list was empty*/
}

