
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
 * advanced_binary - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element in the array of integer
 * @size: size of the total length of the array
 * @value: Target value to search for in the array
 *
 * Return: -1 on failure otherwise the index number of the Target value
 *
 */
int advanced_binary(int *array, size_t size, int value)
{

	int L = 0, R = ((int)size - 1), T = value;

	if (!array || size == 0)
		return (-1);

	return (btr(array, T, L, R));
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
	{
		if (m == 0 || array[m - 1] != T)
			return (m);
		else
			return (btr(array, T, start, m - 1));
	}
	else if (array[m] < T)
		return (btr(array, T, m + 1, end));
	else
		return (btr(array, T, start, m - 1));

	return (-1);
}
