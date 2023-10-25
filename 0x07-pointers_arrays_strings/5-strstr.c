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
	int i;

	i = 0;
	while (*(haystack + i))
	{
		if (*(haystack + i) == *needle)
		{
			break;
		}
		else
		{
			i++;
			continue;
		}
	}

	if (*(haystack + i) == *needle)
	{
		return (&haystack[i]);
	}
	else
		return (NULL);
}
