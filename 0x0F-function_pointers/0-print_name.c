#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: String to print
 * @f: Pointer to the function to print string
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
