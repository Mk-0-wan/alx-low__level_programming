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
	listint_t *first_node;

	first_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = first_node;
	return (*head);
}
