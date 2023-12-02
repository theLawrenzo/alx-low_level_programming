#include <unistd.h>

/**
 * _putchar - Function that wirtes a single character to stdin
 * @c: Character to write
 *
 * Return: On success 1.
 * -1 on error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
