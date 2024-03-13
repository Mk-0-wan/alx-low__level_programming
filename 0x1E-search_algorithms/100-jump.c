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
	double len = size - 1, midpoint;
	int last_val = 0;

	if (!array || size == 0)
		return (-1);

	midpoint = floor(sqrt(len));

	printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
	while (array[(int)midpoint] < value)
	{
		last_val = midpoint;
		printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
		midpoint += floor(sqrt(len));
		if (array[(int)midpoint] > value || midpoint > len)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					last_val, (int)midpoint);
			printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
		}
		if (last_val >= len)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n",
			last_val, (int)midpoint);
	while (array[last_val] < value)
	{
		printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
		last_val++;
		if (last_val >= len)
			return (-1);
	}
	if (array[last_val] == value)
	{
		printf("Value checked array[%d] = [%d]\n", last_val, array[last_val]);
		return (last_val);
	}
	return (-1);
}
