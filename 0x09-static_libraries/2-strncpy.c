#include "main.h"

/**
 * _strncpy - Function that copies a string to another buffer
 * @dest: Destination string
 * @src: Source string
 * @n: Size of buffer to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
