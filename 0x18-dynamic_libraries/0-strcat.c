#include "main.h"

/**
 * find_len - finds the lenght of a string
 * @s: The string
 *
 * Return: len
 */
int find_len(char *s)
{
	int len;

	len = 0;
	while (*(s++))
		len++;

	return (0);
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
	len = find_len(dest);
	while (*(src + i))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	return (dest);
}
