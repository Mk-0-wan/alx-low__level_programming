#include "sort.h"

/**
 * bubble_sort -  simple sorting algorithm which acts by swapping two integers
 * @array: pointer to an array of integers
 * @size: pointer to an array of integers
 * Return: a sorted array using bubble_sort algorithm
 */
void bubble_sort(int *array, size_t size)
{

	ul i = 0, j;
	size_t new_size = size;

	while (i < size)
	{
		print_array(array, new_size);
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				Swap2(array[j], array[j + 1]);
			}
		}
		i++;
	}
}
