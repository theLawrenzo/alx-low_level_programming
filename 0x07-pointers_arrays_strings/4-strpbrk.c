#include "main.h"

/**
 * _strpbrk - Function that searches a string for any a set of bytes
 * @s: String to be searched
 * @accept: Substring
 *
 * Return: &s[i]
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}

		if (*(s + i) == *(accept + j))
		{
			return (&s[i]);
		}

		i++;
	}

	return (&s[i]);
}
