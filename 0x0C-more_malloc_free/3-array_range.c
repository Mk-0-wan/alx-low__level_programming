#include "main.h"
#include <stdlib.h>
/**
 * array_range - makes a new array
 * @min:starting value of the array;
 * @max:last and highest value in the array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *s;
	int index, size;

	if (min > max)
	{
		return (NULL);
	}
	/*checks the length of the array*/
	size = max - min + 1;
	/*allocate the array memory according to the size of the array*/
	s = malloc(sizeof(int) * size);

	if (!s)
	{
		return (NULL);
	}
	/*looping over the new array starting over at the min value to max value*/
	for (i = 0; min <= max; i++)
	{
		s[i] = min++;
	}
	/*note we are only adding one to each element in the array from the min*/
	return (s);
}
