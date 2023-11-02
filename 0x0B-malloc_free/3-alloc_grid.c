#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a two dimensional
 * array of integers
 * @width: Number of columns
 * @height: NUmber of rows
 *
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			while (i > 0)
			{
				i--;
				free(*(ptr + i));
				if (i < 0)
					break;
			}
			if (i < 0)
				break;
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*(*(ptr + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
