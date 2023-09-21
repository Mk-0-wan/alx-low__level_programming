#include "lists.h"


/**
 * print_list - prints all the values int the linked list
 * @h: pointer to the first node in the linked list
 * Return: number of nodes int the linked list.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0, len;
	const list_t *current = h;

	if (!h)
		return (-1);

	while (current != NULL)
	{
		len = current->len;
		if (!current->str)
		{
			len = 0;
			_putchar('[');
			_putchar(len + '0');
			_putchar(']');
			_puts(" (nil)");
		}
		else
		{
			_putchar('[');
			_putchar(len + '0');
			_putchar(']');
			_putchar(' ');
			_puts(current->str);
		}
		_putchar('\n');
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
