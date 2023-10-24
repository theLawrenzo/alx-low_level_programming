#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String to search
 * @needle: Substring
 *
 * Return: &s[i]
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j))
		{
			if (*(haystack + i) == *(needle + j))
			{
				break;
			}
			else
			{
				j++;
				continue;
			}
		}

		if (*(haystack + i) == *(needle + j))
		{
			break;
		}

		i++;
	}

	return (&haystack[i]);
}
