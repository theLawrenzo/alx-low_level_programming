#include "main.h"

/**
 * swap_int - Function that swaps the values of two integer variables
 * @a: First integer parameter
 * @b: Second integer parameter
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
