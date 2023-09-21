#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of the list
 * @head: address of the first node in the list
 * @str: string of chars
 * Return: address of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		_puts("Memory allocation failed\n");
		return (NULL);
	}

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
		current = current->next;
	current->next = new_node;

	return (new_node);
}
