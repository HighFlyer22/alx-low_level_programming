#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase,
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, b;

	for (b = 0; b <= 9; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
