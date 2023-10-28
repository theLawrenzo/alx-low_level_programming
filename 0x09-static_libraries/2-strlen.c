#include "main.h"

/**
 * _strlen - Function that returns the lenght of a sting
 * @s: String to return its length
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
