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
	int len;

	len = strlen(dest);

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}

	*(dest + len + i) = '\0';

	return (dest);
}
