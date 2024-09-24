#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, sum, dec_num;

	if (b == NULL)
		return (0);

	len = strlen(b);
	sum = 0;
	dec_num = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += dec_num;
		else if (b[i] == '0')
		{
			dec_num *= 2;
			continue;
		}
		else
			return (0);

		dec_num *= 2;
	}

	return (sum);
}
