#include "main.h"

/**
 * _memset - Function that fills an area of memory
 * @s: Area to be filled
 * @b: Character to fill area of memory
 * @n: Amount of memory to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
