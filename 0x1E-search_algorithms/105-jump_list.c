#include "search_algos.h"
/**
 * getNode - retrive the node at a given index
 * @head: pointer to the first node element
 * @index: index of each element in the linked list
 * Return: pointer to the node at the given index
 */
listint_t *getNode(listint_t *head, size_t index)
{
	listint_t *current;
	size_t i = 0;

	if (!head) /* check for empty list */
	{
		return (NULL);
	}
	current = head;
	while (i < index) /* move one step back then one ahead */
	{
		if (!current->next)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}

/**
 * jump_list - a function that searchs for a value in a sorted
 * list onf integers using the Jump search algorithm
 * @list: pointer to the head of the jump_list
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the value found in the list
 *
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int low = 0;
	int high = floor(sqrt(size));

	if (!list || !list->next)
		return (NULL);

	while (getNode(list, Min(high, (int)size - 1))->n < value && high < (int)size)
	{
		low = high;
		high += floor(sqrt(size));
		printf("Value checked array[%d] = [%d]\n",
				low, getNode(list, low)->n);
	}

	if (high <= (int)size - 1)
		printf("Value checked array[%d] = [%d]\n", high, getNode(list, high)->n);

	printf("Value found between indexes [%d] and [%d]\n",
			low, Min(high, (int)size - 1));

	while (low <= (int)size - 1 && getNode(list, low)->n <= value)
	{
		printf("Value checked array[%d] = [%d]\n",
				low, getNode(list, low)->n);
		if (getNode(list, low)->n == value)
			return (getNode(list, low));
		low++;
	}
	return (NULL);
}
