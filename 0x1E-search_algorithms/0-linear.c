#include "search_algos.h"
/**
 * linear_search -  a function that searches
 * for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to an array of integers
 * @size: the size of the array
 * @value: Target value to find
 * Return: the index of the Targeted value
 */
int linear_search(int *array, size_t size,  int value)
{
	int i = 0, T = 0;

	if (!array || size == 0)
		return (-1);

	while ((size_t)i < size)
	{
		fprintf(stdout,
		"Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			T = i;
			break;
		}
		i++;
	}
	return ((T) ? T : -1);
}
