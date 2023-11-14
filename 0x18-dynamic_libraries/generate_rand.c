#include <stdio.h>

/**
 * rand - generate random numbers
 * Return: int values
 */
int rand(void)
{
	static int iterations_of_rand;
	static int prdef_values[] = {9, 8, 10, 24, 75, 9};

	iterations_of_rand = 0;
	return ((iterations_of_rand < 6) ? prdef_values[iterations_of_rand++] : 22);
}
