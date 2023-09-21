#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at the beginning of a
 * linked list
 * @head: address of the first node
 * @str: string of chars
 * Return: address of the new item
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len = 0;

	first = malloc(sizeof(list_t));
	if (!first)
	{
		_puts("Memory allocation failed");
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}

	first->len = len;
	first->str = strdup(str);
	first->next = (*head);
	*head = first;
	return (*head);
}
