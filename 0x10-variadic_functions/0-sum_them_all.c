#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its
 * parameters
 * @n: Integer operand
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	i = 0;
	sum = 0;
	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, unsigned int);
		i++;
	}

	va_end(list);

	return (sum);
}
