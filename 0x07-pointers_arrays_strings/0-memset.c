#include "main.h"

/**
 * _memset -  that fills memory with a constant byte
 * @s: pointer to the memory area.
 * @c: constant byte .
 * @n: first n bytes of the memory area.
 *
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
