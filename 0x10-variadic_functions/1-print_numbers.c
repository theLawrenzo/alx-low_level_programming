#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a
 * new line
 * @separator: String that separetes outputs
 * @n: Integer operand
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	i = 0;
	va_start(list, n);

	while (i < n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	putchar('\n');
}
