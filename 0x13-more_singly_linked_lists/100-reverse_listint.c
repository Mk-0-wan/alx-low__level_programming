#include "lists.h"
/**
 * reverse_listint - returns the reversed order of the list
 * @head: The entire node list
 * Return: pointer to the reversed ordered list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head || !*head) /*checking if Node list is empty*/
	{
		return (NULL);
	}
	while (*head)
	{
		next = (*head)->next; /*make next pointer to point to another node*/
		(*head)->next = prev; /*point backwards instead of foward*/
		prev = *head; /*move the curr to prev node*/
		*head = next; /*update the current node to next then repeat the loop*/
	}
	*head = prev;
	return (*head);
}
