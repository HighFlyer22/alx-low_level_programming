#include "main.h"
/**
 * print_sign - function to check the sign of a number
 * @n: integer argument to be used in the function
 * Return: 1 if n is greater than zero, -1  if n is less than zero, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
