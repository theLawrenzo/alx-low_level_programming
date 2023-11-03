#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(max * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (max)
	{
		*(ptr + max) = max;
		max--;
	}

	*ptr = max;

	return (ptr);
}
