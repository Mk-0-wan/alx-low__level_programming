#include "lists.h"
#include <stdalign.h>
#include <stddef.h>

/**
 * safe_node_count - counts the number of nodes present in the list
 * recursively repeating the count
 * @head: pointer of the first node element of the node list
 * Return: number of nodes in the list
 */
size_t safe_node_count(const listint_t *head)
{
	const listint_t *slow = NULL, *fast = NULL;
	size_t node_count = 1;

	if (!head || !head->next)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
			}
			return (node_count);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints all the node list elements (safe version)
 * @head: pointer of the first node element of the node list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t no_of_nodes = 0, i = 0;

	no_of_nodes = safe_node_count(head);

	if (no_of_nodes == 0)
	{
		while (head)
		{
			no_of_nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		while (i < no_of_nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("--> [%p] %d\n", (void *)head, head->n);
	}
	return (no_of_nodes);
}
