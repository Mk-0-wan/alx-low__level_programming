#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - retrive the node at a given index
 * @head: pointer to the first node element
 * @index: index of each element in the linked list
 * Return: pointer to the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *index_node;
	unsigned int i = 0;

	if (!head) /* check for empty list */
	{
		printf("Appears you have an empty list\n");
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	current = head;
	while (i < (index - 1)) /* move one step back then one ahead */
	{
		if (!current->next)
		{
			printf("You have reached the end of the list\n");
			return (NULL);
		}
		current = current->next;
		i++;
	}
	index_node = current->next;/* found node */
	return (index_node);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    /*print_listint(head);*/
    node = get_nodeint_at_index(head, 0);
    printf("%d\n", node->n);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    /*print_listint(head);*/
    free_listint2(&head);
    return (0);
}
