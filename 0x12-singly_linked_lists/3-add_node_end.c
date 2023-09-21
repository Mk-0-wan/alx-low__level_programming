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
	list_t *new_node, *current;
	unsigned int len = 0;

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		_puts("Memory allocation failed\n");
		return (NULL);
	}
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (str[len])
		len++;

	current->next = new_node;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;
	return (new_node);
}
