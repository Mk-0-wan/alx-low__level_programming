#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: Target value to look for in the list
 * @size: length of the array
 *
 * Return: Function should return the first index of the value, else -1
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	size_t pos = 0;

	if (!array || size == 0 || !value)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
				return (low);
			}
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
