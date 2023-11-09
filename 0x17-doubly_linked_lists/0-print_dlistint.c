#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *current = h;

    if (!h)
        return (NULL);
    
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}