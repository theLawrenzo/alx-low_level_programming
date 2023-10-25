#include "main.h"

/**
 * positive_or_negative - Function that checks if a number is positive
 * or negative
 * @n: Integer value to be checked
 *
 * Return: Nothing
 */
void positive_or_negaative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
