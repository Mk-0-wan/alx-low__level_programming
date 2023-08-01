#include "lists.h"
/**
 * reverse_listint - returns the reversed order of the list
 * @head: The entire node list
 * Return: pointer to the reversed ordered list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr;
	listint_t *next = NULL;

	if (!*head || !head) /*checking if Node list is empty*/
	{
		return (NULL);
	}
	curr = *head;
	while (curr)
	{
		next = curr->next; /*make next pointer to point to another node*/
		curr->next = prev; /*point backwards instead of foward*/
		prev = curr; /*move the curr to prev node*/
		curr = next; /*update the current node to next then repeat the loop*/
	}
	curr = prev;
	return (curr);
}
