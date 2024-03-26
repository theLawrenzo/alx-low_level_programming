#include "main.h"

/**
 * _isupper - Checks for uppercase characteres
 * @c: Character to check
 *
 * Return: 1 on success
 * -1 on failure
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

	return (1);
}
