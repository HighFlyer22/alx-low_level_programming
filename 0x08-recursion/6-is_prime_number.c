#include "main.h"

/**
 * is_divisible - Helper function to check if
 *               a number is divisible by another
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: 1 if divisible, 0 otherwise
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
