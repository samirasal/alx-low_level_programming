#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit, 0 through 9
 * @c: This is the parameter of the function
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
