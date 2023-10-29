#include <unistd.h>

/**
 * _puchar - Function that write to stdout
 * @c: Character to print
 *
 * Return: 1 if successful
 * -1 to indicate a failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
