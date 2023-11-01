#include "main.h"

/**
 * free_grid - Function that frees a two dimensional array
 * @grid: Pointer to a 2D array
 * @height: the number of rows in the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(*(grid + i));
		i++;
	}

	free(grid);
}
