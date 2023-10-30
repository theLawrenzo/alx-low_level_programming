#include <unistd.h>

/**
 * _putchar - Function that write a character to stdout
 * @c: Character to write
 *
 * Return: 1 on success
 * -1 to indicate a filure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
