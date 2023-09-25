#include "lists.h"

/**
 * find_listint_loop - looks for a loop in a linked list
 * @head: pointer to the first node
 * Return: pointer to the node where the loop was found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = NULL, *fast = NULL;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (slow);
		}
	}
	return (NULL);
}
