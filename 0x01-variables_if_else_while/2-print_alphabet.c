#include <stdio.h>

/**
 * main - Program that prints out all the alphabets
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
	putchar('\n');

	return (0);
}
