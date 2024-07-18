#include "search_algos.h"

/**
 * binary_search - Finds an integer in an array of ints, using binary search algo
 * @array: Pointer to the the first element in the array
 * @size: Size of the array
 * @value: Element to find its index
 *
 * Return: Index of the value, Otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, lt, rt, md, j;

	lt = 0;
	rt = size - 1;
	if (array == NULL)
		return (-1);
	if (lt > rt)
		return (-1);

	md = rt;
	for (i = 0; i <= md; i++)
	{
		printf("Searching in array: ");
		for (j = 0; j < md; j++)
			printf("%d, ", array[i]);

		printf("\n");
		md = (int) (lt + rt) / 2;
		if (value == array[md])
			break;
		else if (value < array[md])
			rt = md;
		else if (value > array[md])
			lt = md + 1;
	}

	return (md);
}
