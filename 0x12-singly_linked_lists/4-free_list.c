#include "lists.h"

/**
 * free_list - frees list
 * @head: list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
        list_t *nodes;

        if (head == NULL)
                return;

        while (head)
        {
                nodes = head->next;
                free(head->str);
                free(head);
                head = nodes;
        }
}
