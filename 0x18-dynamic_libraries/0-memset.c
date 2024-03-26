#include "main.h"

/**
 * _memset - Function that sets a particular memory
 * @s: Memory to set
 * @b: Character to set memory
 * @n: Size of memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	*(s + i) = '\0';

	return (s);
}
