#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the first element in the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int j = 0, i = 0;

	/* casting away the const in order to traverse through linked list*/
	list_t* curr = (list_t*)h;
	i = curr->len;

	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			printf("[%d] (nil)\n", i - curr->len);
		}
		printf("[%d] %s\n", i, curr->str);
		curr = curr->next;
		j++;
	}
	return (j);
}
