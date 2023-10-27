#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Pointer to the array of argumets
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(*(argv + 1));
		b = atoi(*(argv + 2));

		printf("%d\n", a * b);
		return (0);
	}
}
