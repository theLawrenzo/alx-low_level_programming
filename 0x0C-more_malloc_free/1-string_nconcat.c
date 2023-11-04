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
 * _strdup - Function that copies a string to a newly created
 * buffer and returns a pointer to the buffer
 * @str: String to be copies
 *
 * Return: str on success
 * NULL on failuer
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(_strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);

	_strcpy(new_str, str);

	return (new_str);
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
	if (s1 != NULL && s2 != NULL)
	{
		new_str = malloc(_strlen(s1) + _strlen(s2) + 1);
		if (new_str == NULL)
			return (NULL);

		len = _strlen(s1);
		_strcpy(new_str, s1);
		for (i = 0; i < n && *(s2 + i); i++)
			*(new_str + len + i) = *(s2 + i);
		*(new_str + len + i) = '\0';
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s2 = "";
		new_str = _strdup(s1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
		new_str = _strdup(s2);
	}
	else
	{
		new_str = malloc(1);
		if (new_str == NULL)
			return (NULL);
		new_str = '\0';
	}

	return (new_str);
}
