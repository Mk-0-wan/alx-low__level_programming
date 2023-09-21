#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the values int the linked list
 * @h: pointer to the first node in the linked list
 * Return: number of nodes int the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int len = 0;
	const char *s;
	const list_t *current = h;

	while (current)
	{
		len = current->len;
		s = (current->str) ? current->str : "(nil)";
		printf("[%d] %s\n", len, s);
		current = current->next;
		count++;
	}
	return (count);
}
