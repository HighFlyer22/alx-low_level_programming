#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base value.
 * @y: exponent value.
 *
 * Return: result of x raised to the power of y.
 *         -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
