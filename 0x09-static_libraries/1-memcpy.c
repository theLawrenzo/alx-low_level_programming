#include "main.h"

/**
 * _memcpy - Function that copies a portion of a buffer to another
 * buffer
 * @dest: Destination for buffer
 * @src: Source of buffer to be copied
 * @n: Size to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
