#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 * @s: String to find its length
 *
 * Return: len
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - Function that copies a string to a new buffer
 * @dest: New buffer
 * @src: Soucrce to copy string from
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

/**
 * null_check - Function that checks for null
 * @s: Pointer to be checked
 *
 * Return: NULL if s == NULL
 */
char *null_check(char *s)
{
	if (s == NULL)
		return (NULL);
	else
		return (s);
}

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String one
 * @s2: String two
 * @n: Size of s2 to concatenate to s1
 *
 * Return: new_str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *new_str;

	i = 0;
	if (s1 == NULL && s2 == NULL)
	{
		new_str = malloc(1);
		null_check(new_str);
		new_str = '\n';
	}
	else if (s1 != NULL && s2 == NULL)
	{
		new_str = malloc(_srlen(s1) + 1);
		if (new_str == NULL)
			return (NULL);
		else
		{
			while (*(s1 + i))
			{
				*(new_str + i) = *(s1 + i);
				i++;
			}
		}
	}
	else if (s1 == NULL && s2 != NULL)

	return (new_str);
}
