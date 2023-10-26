#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to
 * the power of y
 * @x: Base number
 * @y: Power number
 *
 * Return: val
 */
int _pow_recursion(int x, int y)
{
	int val;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	val = x * _pow_recursion(x, y - 1);

	return (val);
}
