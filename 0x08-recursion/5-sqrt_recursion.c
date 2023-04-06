#include "main.h"

/**
 * find_sqrt - Computes the natural square root 
 *             of a number recursively
 * @num: The number to compute the square root of
 * @root: The current root value to test
 *
 * Return: The natural square root of the number if it exists,
 *          otherwise -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root
 *                   of a number using recursion
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of the number if it exists,
 *         otherwise -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
