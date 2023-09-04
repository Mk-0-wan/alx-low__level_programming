#include "main.h"
/**
 * free_grid - frees up the memory allocated to the 2D array
 * @grid: pointer to the 2D array
 * @height: length of the column
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
}
