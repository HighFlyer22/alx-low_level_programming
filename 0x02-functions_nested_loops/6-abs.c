#include "main.h"
#include <stdio.h>
/**
 * _abs - function computes the absolute value
 * @a:  is the int to be checked
 * Return: a if a greater than or equal to 0, otherwise a * -1 
 */
int _abs(int a)
{
	if (a > 0 || a == 0)
	{
	return (a);
	}
	else
	return (a * -1);
}
