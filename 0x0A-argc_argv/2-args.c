#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all arguments it reiceves
 * @argc: Number of arguments passed
 * @argv: Pointer to the arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc)
	{
		printf("%s\n", *(argv + i));
		i++;
		argc--;
	}

	return (0);
}
