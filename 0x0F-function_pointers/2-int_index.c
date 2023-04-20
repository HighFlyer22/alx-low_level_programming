#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The integer array to search in
 * @size: The size of the integer array
 * @cmp: Pointer to a function that takes
 *       an integer as argument and returns an integer
 * Return: The index of the first element for which
 *          the cmp function does not return 0,
 *         -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
