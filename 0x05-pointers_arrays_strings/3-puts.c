#include "main.h"

/**
 * _puts - Function that prints a string to stdout
 * @str: String to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
