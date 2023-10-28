#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
