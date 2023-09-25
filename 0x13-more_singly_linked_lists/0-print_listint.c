#include "lists.h"
#include <stddef.h>
#include <unistd.h>

/**
 * print_listint - prints all nodes in the linked list
 * @h: pointer to the head node.
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int no_nodes = 0;
	const listint_t *current = NULL;

	if (!h)
	{
		_puts("Appears you have an empty list");
		return (-1);
	}

	current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		no_nodes++;
	}
	return (no_nodes);
}

/**
 * _puts - tries to emulate the printf-function
 * @str: pointer to a string of char
 * Return: void
 */
void _puts(char *str)
{
	unsigned int i = 0;

	if (!str)
		return;

	while (str[i])
	{
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	write(STDOUT_FILENO, "\n", 1);
}
