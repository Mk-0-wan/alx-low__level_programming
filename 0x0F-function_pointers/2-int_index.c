#include "function_pointers"
/**
 * int_index - gets the position of an item
 * @array: array
 * @size: size of each element of in array
 * @cmp: compares the elements
 * Return: Always (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}