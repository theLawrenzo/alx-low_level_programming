#include "main.h"

/**
 * _strcpy - Function that copies a string from one buffer location to
 * another
 * @dest: Location to copy string to
 * @src: Source of string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
