#include "lists.h"

/**
 * free_list - frees all nodes in linked list recursively
 * @head: address of the first node in the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
	{
		_puts("Nothing to free here\n");
		return;
	}

	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
