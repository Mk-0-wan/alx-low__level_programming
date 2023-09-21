#include "lists.h"

/**
 * free_list - frees all nodes in linked list recursively
 * @head: address of the first node in the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *current = head;

	if (!current)
	{
		_puts("Nothing to free here\n");
		return;
	}

	while (current)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
