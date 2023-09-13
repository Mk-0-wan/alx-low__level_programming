#include "function_pointers.h"

/**
 * array_iterator - iterates over an given array
 * @array: pointer to an array of ints
 * @size: length of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
