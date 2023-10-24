#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String to be checked
 * @accept: Substrin
 *
 * Return: sub_len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sub_len;

	i = 0;
	sub_len = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				sub_len++;
				j++;
				continue;
			}
			else
			{
				j++;
				continue;
			}
		}
		i++;
	}

	return (sub_len);
}
