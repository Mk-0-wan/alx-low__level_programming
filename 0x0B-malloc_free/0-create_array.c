#include "main.h"

/**
 * create_array - function that allocates memory of a given
 * size and initializes it with the given character.
 * @size: length of the array
 * @c: character to be initialize to the array.
 * Return: pointer to the new dynamically created array
 */
char *create_array(unsigned int size, char c)
{
	size_t i = 0;
	char *arry;

	if (size == 0)
	{
		return (0);
	}
	arry = malloc(size * sizeof(char));
	MALLOC_CHECK(arry);
	while (i <= size)
	{
		arry[i] = _putchar(c);
		i++;
	}
	return (arry);
}
