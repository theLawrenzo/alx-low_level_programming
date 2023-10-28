#include "main.h"

/**
 * _strpbrk - Function that locates the first occurence in the string
 * s of any of the byte in the string accept
 * @s: String to search
 * @accept: Searching string
 *
 * Return: s[i]
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
