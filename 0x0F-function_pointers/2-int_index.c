#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: A pointer to an array
 * @size: Size of the array
 * @cmp: pointer to the function to compare values
 *
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret_val;

	i = 0;
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		ret_val = cmp(*(array + i));
		if (ret_val > 0)
		{
			return (i);
		}
		i++;
	}
	if (ret_val < 0)
		return (-1);

	return (i);
}
