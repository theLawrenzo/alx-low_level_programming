#include "main.h"

/**
 * _strcpy - Function that copies a string to another buffer
 * @dest: Destination strig
 * @src: Source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
