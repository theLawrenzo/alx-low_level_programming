#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic characters
 * @c: Character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
