#include "main.h"

/**
 * _strstr - Function that finds the first occurence of the string
 * needle in the string haystack
 * @haystack: String to be searched
 * @needle: String value
 *
 * Return: haystack[i]
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

		i++;
	}

	return (&haystack[i]);
}
