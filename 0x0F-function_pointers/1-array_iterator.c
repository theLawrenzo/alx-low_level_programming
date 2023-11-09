#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: pointer to the function to execute on element of the array
 *
 * Return: NOthing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*fptr)(int);
	size_t i;

	fptr = action;
	i = 0;
	while (i < size)
	{
		fptr(*(array + i));
		i++;
	}
}
