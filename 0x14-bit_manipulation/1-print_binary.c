#include "main.h"

/**
 * print_binary - Prints the bin rep. of a dec. num
 * @n: Decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = n;

	if (i == 0)
		printf("0");
	else if (i == 1)
		printf("1");
	else
	{
		print_binary(i >> 1);
		printf("%d", i & 1);
	}
}
