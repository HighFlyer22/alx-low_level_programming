#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its variable arguments
 *
 * @n: The number of arguments to sum
 * @...: The variable arguments to sum
 *
 * Return: The sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
