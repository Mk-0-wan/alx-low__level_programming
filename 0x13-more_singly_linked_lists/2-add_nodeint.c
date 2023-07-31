#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - pointer to the beginning of the list
 * @head: root of the linked list
 * @n: value of the list
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (first_node == NULL)
	{
		return (NULL);
	}

	first_node->n = n;
	first_node->next = (*head);
	(*head) = first_node;
	return (*head);
}

