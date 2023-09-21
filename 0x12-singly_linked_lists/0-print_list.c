#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the values int the linked list
 * @h: pointer to the first node in the linked list
 * Return: number of nodes int the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int len;
	const char *s;
	const list_t *current = h;

	while (current != NULL)
	{
		len = current->len;
		s = (current->str) ? current->str : "(nil)";
		printf("[%u] %s\n", len, s);
		current = current->next;
		count++;
	}
	return (count);
}

/**
 * _puts - output the strings to the stdio
 * @s: pointer to a string of chars
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
