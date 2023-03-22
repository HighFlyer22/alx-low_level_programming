#include "main.h"

/**
 * _islower - function to check for lowercase 
 * @c:  is character to check
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
