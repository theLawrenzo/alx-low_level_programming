#include "3-calc.h"

/**
 * main - Check the code
 * @argc: Argument counts
 * @argv: Pointer to the arguments passed
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;
	int (*func_ptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 3));
	operator = *(argv + 2);

	func_ptr = *get_op_func(operator);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (((*operator == '/') || (*operator == '%')) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = func_ptr(num1, num2);
	printf("%d\n", calc);

	return (0);
}
