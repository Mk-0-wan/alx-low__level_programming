#include "function_pointers.h"

/**
 * int_index - return the index of a element in an array
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: function pointer which compares the element passed
 * Return: position of elements matching
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0, pos = 0;

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		result = cmp(array[i]);
		if (result > 0)
			pos = i;
		else
			return (-1);
	}
	return (pos);
}
