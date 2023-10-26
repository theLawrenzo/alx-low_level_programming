#include <unistd.h>

/**
 * _putchar - Function that prints to stdout
 * @c: Character to print
 *
 * Return: 1 if c is a character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
