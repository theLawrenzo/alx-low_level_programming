#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @str: String length to be returned
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_concat - Function that concatenates two strings
 * @s1: Left string
 * @s2: Right string
 *
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;

	str = (char *)malloc(_strlen(s1) + _strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	while (*s2)
	{
		*(str + i) = *s2;
		i++;
		s2++;
	}
	*(str + i) = '\0';

	return (str);
}
