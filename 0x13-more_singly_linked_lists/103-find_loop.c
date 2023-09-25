#include "lists.h"

/**
 * find_listint_loop - looks for a loop in a linked list
 * @head: pointer to the first node
 * Return: pointer to the node where the loop was found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = NULL, *fast = NULL;

	if (!head || !head->next)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (NULL);
}
