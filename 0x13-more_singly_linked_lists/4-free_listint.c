#include "lists.h"

/**
 * free_listint - frees the linked list listint_t
 * @head: pointer to the first node in the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head; /* store the current head */
		head = head->next; /* move to the next one */
		free(temp);/*free the current head */
	}
	free(head);/* finally free the head itself */
}
