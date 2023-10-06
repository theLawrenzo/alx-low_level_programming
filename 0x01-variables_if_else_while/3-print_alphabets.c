#include <stdio.h>

/**
 * main - Program that prints all the alphabets in lowercase
 * and then in uppercase
 *
 * Return: Nothing
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i++);
	}
	i = 65;
	while (i <= 90)
	{
		putchar(i++);
	}

	putchar('\n');

	return (0);
}
