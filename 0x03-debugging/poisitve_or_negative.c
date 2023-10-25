#include "main.h"

/**
 * positive_or_negative - Function that check for the value of a number
 * @n: Integer value
 *
 * Return: Nothing
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positve", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
}
