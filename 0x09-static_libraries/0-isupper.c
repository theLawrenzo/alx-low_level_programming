#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: Character to check
 *
 * Return: Nothing
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
