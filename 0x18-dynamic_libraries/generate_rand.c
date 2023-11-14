#include <stdio.h>

int iterations_of_rand = 0;
/**
 * rand - generate random numbers
 * Return: int values
 */
int rand(void)
{
	int prdef_values[] = {9, 8, 10, 24, 75, 9};

	return ((iterations_of_rand < 6) ? prdef_values[iterations_of_rand++] : 22);
}
