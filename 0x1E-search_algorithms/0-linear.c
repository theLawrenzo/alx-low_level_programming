#include "search_algos.h"

/**
 * linear_search - A linear search function, that searches for an integer
 * @array: Pointer to the first element in the array
 * @size: Size of the array
 * @value: Value to find
 *
 * Return: i
 */
int linear_search(int *array, size_t size, int value)
{
	int i, found = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			found = 1;
			break;
		}
	}

	if (found == 0)
		return (-1);

	return (i);
}
