#include "main.h"

/**
 * alloc_grid - allocation of memory to a 2d array
 * @width: row size
 * @height: column size
 * Return: 2d dynamically array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ar;

	/* nothing is set just print nothing */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* memory allocation to each column */
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);

	/* memory allocation to each row */
	for (; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			/* free the memory you have just allocated */
			for (; height >= 0; height--)
				free(ar[i]);
			/* also don't forget for columns also */
			free(ar);
			return (NULL);
		}
	}
	/* initialize the array with 0 values */
	for (; i < height; i++)
		for (; j < width; j++)
			ar[i][j] = 0;
	return (ar);
}
