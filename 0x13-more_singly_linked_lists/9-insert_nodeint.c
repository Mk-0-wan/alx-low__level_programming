#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - add new node at a given position
 * @head: pointer of the first node
 * @idx: indexed position for the targeted node
 * @n: value to store to the new node
 * Return: pointer to the new_node created, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_replacing_node;
	unsigned int i = 0;

	new_replacing_node = malloc(sizeof(listint_t));
	if (!new_replacing_node)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new_replacing_node->n = n;
	if (idx == 0)
	{
		new_replacing_node->next = *head;
		*head  = new_replacing_node;
		return (new_replacing_node);
	}
	current = *head;
	while (i < (idx - 1))
	{
		if (!current)
		{
			printf("Opps you have reached the end of the list\n");
			free(new_replacing_node);
			return (NULL);
		}
		current = current->next;/* move the current to the right position */
		i++;
	}
	if (!current)
	{
		printf("Opps you have reached the end of the list\n");
		free(new_replacing_node);
		return (NULL);
	}
	new_replacing_node->next = current->next; /* store the current node */
	current->next = new_replacing_node; /* make new_node point to it */
	return (new_replacing_node);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
