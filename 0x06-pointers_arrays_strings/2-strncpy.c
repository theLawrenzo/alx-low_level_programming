#include "main.h"

/**
 * _strncpy - Function that copies a string to another buffer
 * @dest: Destination string
 * @src: Source string
 * @n: Size of src to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
