#include "main.h"

/**
 * _memcpy - Functionn that copies memory area
 * @dest: Memory area to receive copies value
 * @src: Memeory area to copy from
 * @n: size of memory to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
