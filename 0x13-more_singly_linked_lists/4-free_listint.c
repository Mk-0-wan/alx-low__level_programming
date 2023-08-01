#include "lists.h"
/**
 * free_listint - frees all the memory allocation of the linkedlist
 * @head: the entire nodelist
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nodelist;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		nodelist = head;
		head = head->next;
		free(nodelist);
	}
	head = NULL;
}
