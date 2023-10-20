#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Pointer to the array
 * @n: Size of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	i = 0;
	while (i < n / 2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + ((n - 1) - i));
		*(a + ((n - 1) - i)) = tmp;
		i++;
	}
}
