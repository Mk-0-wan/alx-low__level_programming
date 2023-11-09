#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head node
 * Return: value of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t val = 0;

	if (!h)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		val++;
	}
	return (val);
}
