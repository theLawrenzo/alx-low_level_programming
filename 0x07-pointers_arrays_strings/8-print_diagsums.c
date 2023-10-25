#include "main.h"

/**
 * print_diagsums - Function that prints the sum of a diagonal line
 * @a: Array of integers
 * @size: Size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum0, sum1;

	sum0 = 0;
	sum1 = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if ((i >= 0 && i < size) && (j == (size - 1 - i)))
			{
				sum0 += *(a + (i * size) + j);
				j++;
			}
			else if (i == j)
			{
				sum1 += *(a + (i * size) + j);
				j++;
			}
			else
			{
				j++;
				continue;
			}
		}

		i++;
	}

	printf("%d, %d\n", sum1, sum0);

}
