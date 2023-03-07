#include "main.h"
#include <stdio.h>

/**
 * main - Checks for uppercase letters
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
