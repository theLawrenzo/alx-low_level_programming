#include "main.h"

/**
 * _isdigit - Function that checks for digits
 * @c: Characte to check
 *
 * Return: 1 if c is digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
