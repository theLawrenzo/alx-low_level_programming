#include "variadic_functions.h"

/**
 * print_strings - Function that print strings, followed by a
 * new line
 * @separator: String separator
 * @n: Integer operand
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	i = 0;
	va_start(list, n);

	while (i < n)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

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
