#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @n: Integer value
 *
 * Return: val
 */
int _abs(int n)
{
	int val;

	val = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			val++;
			n++;
		}
	}
	else if (n > 0)
	{
		while (n)
		{
			val++;
			n--;
		}
	}
	else
	{
		val = 0;
	}

	return (val);
}
