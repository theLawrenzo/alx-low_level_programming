#include "main.h"

/**
 * _strchr - Function that searches for a character in a string
 * @s: String to search
 * @c: Character to find
 *
 * Return: s[i]
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (c == *(s + i))
		{
			break;
		}
		i++;
	}

	return (&s[i]);
}
