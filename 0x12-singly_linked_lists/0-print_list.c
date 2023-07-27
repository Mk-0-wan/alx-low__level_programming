#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the first element in the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int j = 0, i;

	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		i = curr->len;
		if (curr->str == NULL)
		{
			curr->str = "(nil)";
			i = 0;
		}
		printf("[%u] %s\n", i, curr->str);
		curr = curr->next;
		j++;
	}
	return (j);
}
