#include <unistd.h>

/**
 * _putchar - Function that prints a character to stdout
 * @c: Character to print
 *
 * Return: 1 if c is a character
 * -1 to indicate an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
