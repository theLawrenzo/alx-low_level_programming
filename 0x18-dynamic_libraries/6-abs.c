#include "main.h"

/**
 * _abs - Function that compute the absolute value of a number
 * @n: Number to find its absolute value
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

		return (val);
	}
	else if (n > 0)
	{
		while (n > 0)
		{
			val++;
			n--;
		}

		return (val);
	}
	else
	{
		return (val);
	}
}
