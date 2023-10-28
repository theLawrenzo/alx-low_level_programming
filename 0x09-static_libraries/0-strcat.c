#include "main.h"

/**
 * _strlen - Function that find the length of a string
 * @s: String value
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

/**
 * _strcat - Funtion that concatenates two strings
 * @dest: Destinantion string
 * @src: Source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = _strlen(dest);
	while (*(src + i))
	{
		*(dest + len++) = *(src + i);
		i++;
	}
	return (dest);
}
