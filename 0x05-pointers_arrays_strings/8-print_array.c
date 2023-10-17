#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints an array
 * @a: Array to be printed
 * @n: Size of the array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
}
