#include "lists.h"
/**
 * insert_nodeint_at_index - adding a new node according to the given pos
 * @head: the entire node list
 * @idx: position to add new_node
 * @n: value of the new_node
 * Return: pointer to where the new_node is to added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *curr, *new_node;

	if (!*head) /*check if the nodelist is empty*/
	{
		return (NULL);
	}

	curr = *head;
	if (idx == 0) /*check if there are no elements add this one as the first one*/
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
		{
			return (NULL);
		}
		new_node->n = n; /* set the value*/
		new_node->next = curr;
		*head = new_node; /* make the new header node*/
		return (new_node);
	}
	while (curr) /*back of the node list and traversing through it*/
	{
		if (count + 1 == idx) /*start counting from the first indexed element*/
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
			{
				return (NULL);
			}
			new_node->n = n;
			new_node->next = curr->next; /* copy the pointer of the prev node */
			curr->next = new_node; /* make the prev node point to the new node */
			return (new_node);
		}
		curr = curr->next;
		count++;
	}
	return (NULL);
}
