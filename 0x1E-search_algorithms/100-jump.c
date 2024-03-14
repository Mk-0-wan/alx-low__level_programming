#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: Target value to look for in the list
 * @size: length of the array
 *
 * Return: Function should return the first index of the value, else -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	int last_val = 0, midpoint = 0;

	if (!array || size == 0)
		return (-1);

	/* What if it's the first index */
	if (array[last_val] == value)
		return (last_val);

	midpoint = floor(sqrt((int)size));
	/* Starting checkpoint */
	printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
	/* Finding the boundry using jump_search algo */
	while (array[midpoint] < value && midpoint <= (int)size - 1)
	{
		last_val = midpoint;
		midpoint += floor(sqrt((int)size - 1));
		printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
	}
	/* The boundry we are currently working on */
	printf("Value found between indexes [%d] and [%d]\n",
				last_val, (int)midpoint);
	/* Starting point for the linear search algo */
	while (array[last_val] < value)
	{
		printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
		last_val++;
		/* Found the index of the value */
		if (array[last_val] == value)
		{
			printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
			return (last_val);
		}
		/* No such value in the array */
		if (last_val > (int)size - 1)
			return (-1);
	}
	return (-1);
}
