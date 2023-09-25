#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add int node at the beginning of the list
 * @head: pointer to the first node int in the list
 * @n: value passed for the head node
 * Return: address of the new node element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));
	if (!first_node)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	first_node->n = n;
	first_node->next = (*head); /* points to whatever head was pointing to */
	*head = first_node;
	return (first_node);
}
