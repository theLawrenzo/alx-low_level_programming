#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: Number to return its Factorial
 *
 * Return: fact
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	fact = n * factorial(n - 1);
	return (fact);
}
