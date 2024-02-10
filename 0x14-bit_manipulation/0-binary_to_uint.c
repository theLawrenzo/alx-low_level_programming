#include "main.h"

/**
 * binary_to_uint - Convert a bit string to an integer
 * @b: Bit string
 *
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int tmp, num;

	if (*b > 49)
		return (0);
	if (*b < 48)
		return (0);
	tmp = *b;
	num = tmp * (unsigned int)(pow(2, (unsigned int)strlen(b)));
	num += binary_to_uint(b - 1);
	return (num);
}
