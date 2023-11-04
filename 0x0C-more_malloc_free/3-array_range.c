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
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(max * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		*(ptr + i) = i;

	return (ptr);
}
