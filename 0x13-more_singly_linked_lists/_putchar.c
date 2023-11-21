#include <unistd.h>

/**
 * _putchar - Function that writes to stdout
 * @c: Character to write
 *
 * Return: On success 1
 * On error -1 and errno set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
