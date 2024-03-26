#include "main.h"

/**
 * _isalpha - Checks if a character is uppercase
 * @c: The character to find
 *
 * Return: 1 on success
 * 0 on failure
 */
int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
	return (0);
}
