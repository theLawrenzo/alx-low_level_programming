#include <unistd.h>

/**
 * _putchar - Function that writes a single character to stdout
 * @c: Character to write
 *
 * Return: On success 1
 * -1 on error and errno set at the same time
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
