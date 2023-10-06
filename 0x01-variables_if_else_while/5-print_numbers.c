#include <stdio.h>

/**
 * main - Program that prints all the base 10 numbers
 *
 * Return: Nothing
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i++);
	}

	putchar ('\n');

	return (0);
}
