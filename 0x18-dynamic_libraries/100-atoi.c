#include "main.h"

/**
 * _atoi - Function that converts a string an integer
 * @s: String to convert to string
 *
 * Return: num
 */
int _atoi(char *s)
{
	int i, num;

	i = 0;
	num = 0;

	while (*(s + i))
	{
		num += (int)*(s + i);
		i++;
	}

	return (num);
}
