#include "lists.h"
/**
 * add_node - adding a node at the beginning of the list
 * @head: node list
 * @str: value of the node
 * Return: node list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;
	size_t i = 0;

	while (str[i])
	{
		i++;
	}
	curr = malloc(sizeof(list_t));
	if (curr == NULL)
	{
		return (NULL);
	}
	curr->len = i;
	curr->str = strdup(str);
	curr->next = (*head);
	(*head) = curr;
	return (*head);
}
