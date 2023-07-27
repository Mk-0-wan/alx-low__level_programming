#include "lists.h"

/**
 * print_list - prints all elements of list
 * @h: pointer to list
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	unsigned int j = 0, l;
	char *ptr;

	while (h != NULL)
	{
		ptr = h->str;
		l = h->len;
		if (ptr == NULL)
		{
			ptr = "(nil)";
			l = 0;
		}

		printf("[%u] %s\n", l, ptr);
		h = h->next;
		j++;
	}
	return (j);
}
