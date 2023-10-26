#include "main.h"

/**
 * real_root - Function tha finds the root of a number
 * @num: Root number
 * @i: Square number
 *
 * Return: The value of i
 */
int real_root(int num, int i)
{
	if (i * i > num)
	{
		return (-1);
	}

	if (i * i == num)
		return (i);

	return (real_root(num, i + 1));
}

/**
 * _sqrt_recursion - Function that returns the square root of a
 * number
 * @n: Number to find its length
 *
 * Return: The square root o f n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (real_root(n, 0));
}
