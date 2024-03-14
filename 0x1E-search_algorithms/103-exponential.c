#include "search_algos.h"

/**
 * Print - just pretty print according to the requirement
 * @a: pointer to an array of integers
 * @start: first index of the array
 * @end: last index of the array
 * Return: void
 */
void Print(int *a, int start, int end)
{
	int i = start;

	printf("Searching in array: ");
	for (; i <= end; i++)
	{
		printf("%d", a[i]);
		if (i < end)
			printf(", ");
	}
	putchar('\n');
}

/**
 * exponential_search -  a function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: Target value to look for in the list
 * @size: length of the array
 *
 * Return: Function should return the first index of the value, else -1
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, prev_bound = 0;

	if (!array || size == 0)
		return (-1);

	while (bound < (int)size - 1 && array[bound] < value)
	{
		prev_bound = bound;
		printf("Value checked array[%d] = [%d]\n", (int)bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev_bound, bound);

	return (btr(array, value, bound / 2, Min(bound, (int)size - 1)));

}


/**
 * btr - binary tree recursion way
 * @array: pointer to the first element in the array of integer
 * @T: Target value to search for in the array
 * @start: position to start the array search from
 * @end: new end of the array
 *
 * Return: -1 on failure otherwise the index number of the Target value
 *
 */
int btr(int *array, int T, int start, int end)
{
	int m = (start + end) / 2;

	if (start > end)
		return (-1);

	Print(array, start, end);

	if (array[m] == T)
		return (m);

	if (array[m] < T)
		return (btr(array, T, m + 1, end));
	else
		return (btr(array, T, start, m - 1));

	return (-1);
}
