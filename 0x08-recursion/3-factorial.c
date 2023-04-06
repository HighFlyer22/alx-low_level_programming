
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: The the factorial n.
 *
 * Return: 1 if n is 0, n * factorial(n - 1) if n > 0
  */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
