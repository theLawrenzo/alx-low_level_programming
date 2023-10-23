#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a
 * number
 * @n: Integer value
 *
 * Return: num;
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a);

	return (a);
}
