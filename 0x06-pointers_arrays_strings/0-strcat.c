#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: Destination string
 * @src: String to concatenate to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(dest);
	i = 0;
	while(*(src + i))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}

	*(dest + len + i) = '\0';

	return (dest);
}
