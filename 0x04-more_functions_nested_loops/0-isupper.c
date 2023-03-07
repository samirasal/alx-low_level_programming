#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase letters
 * @c: This is the argument of the function
 * Return: Always Success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
