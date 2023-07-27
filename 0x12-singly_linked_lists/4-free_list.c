#include "lists.h"

/**
 * free_list - frees list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
        list_t *traverse;

        if (head == NULL)
                return;

        while (head)
        {
                traverse = head->next;
                free(head->str);
                free(head);
                head = traverse;
        }
}
