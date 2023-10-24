#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to search
 * @c: Character to search for
 *
 * Return: s[i]
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (s[i] == c)
		{
			break;
		}
		else
		{
			i++;
			continue;
		}

	}

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
