#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an integer array
 *
 * @array: The integer array to iterate over
 * @size: The size of the integer array
 * @action: Pointer to a function that takes
 *          an integer as argument and returns void
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
