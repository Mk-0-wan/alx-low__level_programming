#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that list out the len of linked list
 * @h: head pointer of the linked list
 * Return: len of the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	if (!current)
		return (0);

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
