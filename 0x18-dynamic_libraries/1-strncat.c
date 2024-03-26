#include "main.h"

/**
 * _strlen - Function that find the length of a string
 * @s: String to find its length
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
 * _strncat - Function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Size of the string to copy
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	i = 0;
	dest_len = _strlen(dest);

	while (i < n)
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}

	*(dest + dest_len + i) = '\0';

	return (dest);
}
