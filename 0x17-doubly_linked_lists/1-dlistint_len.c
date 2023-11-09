#include <complex.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of the list
 * @h: pointer to the first node in the list
 * Return: len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t total = 0;

	if (!h)
		return (0);

	while (current)
	{
		current = current->next;
		total++;
	}
	return (total);
}
