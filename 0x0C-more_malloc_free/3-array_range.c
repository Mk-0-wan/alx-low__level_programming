#include "main.h"

/**
 * array_range - range of int which are dynamically allocated.
 * @min: starting point for the range
 * @max: the end value of the range
 * Return: pointer to the newly created array in the heap
 */
int *array_range(int min, int max)
{
	int *temp, total_len, i = 0;

	if (min > max)
		return (NULL);

	total_len = (max - min) + 1; /* include the max value */

	temp = malloc(sizeof(int) * total_len);
	MALLOC_CHECK(temp);
	/* made it flexible to hold any kind of range the user passes to it */

	while (min <= max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}
