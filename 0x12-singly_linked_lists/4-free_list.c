#include "lists.h"

/**
 * free_list - frees all nodes in linked list recursively
 * @head: address of the first node in the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		if (temp->str)
			free(temp->str);
		free(temp);
	}
	free(head);
}
