#include "main.h"

/**
 * _strchr - unction that locates a character in a string.
 * @s: string to searche.
 * @c: character to locate.
 *
 * Return: a pointer - if c is found.
 *         Null - f c is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
