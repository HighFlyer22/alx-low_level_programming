#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times.
 *
 * Return: void
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

