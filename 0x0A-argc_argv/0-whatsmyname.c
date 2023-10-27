#include <stdio.h>
#include "main.h"

/**
 * main - Program that print its name
 * @argc: Number of arguments passed
 * @argv: Pointer to the array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		if (argc == 0)
		{
			printf("%s\n", *(argv + argc));
		}
	}

	return (0);
}
