#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the number of arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Pointer to the arguments passed
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int len;

	len = 0;
	if (argc < 2)
	{
		printf("%d\n", len);
		return (0);
	}
	
	while (argc)
	{
		if (argc > 0)
		{
			if (argc == 1)
				break;
			len++;
			argc--;
		}
	}

	printf("%d\n", len);

	return (0);
}
