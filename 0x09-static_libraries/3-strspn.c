#include "main.h"

/**
 * _strspn - Function that calculates the length of the initial segment
 * of which consists entirely of bytes in accept
 * @s: String to search
 * @accept: String value
 *
 * Return: size
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, size;

	i = 0;
	size = 0;
	while (*(s + i))
	{
		if (*(s + i) == *(accept + i))
		{
			size++;
		}
		i++;
	}

	return (size);
}
