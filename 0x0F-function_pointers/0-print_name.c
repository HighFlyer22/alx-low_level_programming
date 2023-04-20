#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function pointer
 * @name: The name to print
 * @f: Pointer to a function that takes a char pointer as argument and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
