#include "main.h"

/**
 * _strlen_recursion - Function that return the length of a string
 * @s: String to return its length
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
