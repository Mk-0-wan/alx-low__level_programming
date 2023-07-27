#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the first element in the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int j = 0, i;
	char *ptr;

	while (h != NULL)
	{
		i = h->len;
		ptr = h->str;
		if (ptr == NULL)
		{
			ptr = "(nil)";
			i = 0;
		}
		printf("[%u] %s\n", i, ptr);
		h = h->next;
		j++;
	}
	return (j);
}
