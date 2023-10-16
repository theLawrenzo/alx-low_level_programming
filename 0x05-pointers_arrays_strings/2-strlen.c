#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: String to find its length
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
