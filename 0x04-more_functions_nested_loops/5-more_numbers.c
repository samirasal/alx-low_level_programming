#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: Success
 */

void more_numbers(void)
{
	int c = 0;
	int d;

	while (c < 10)
	{
	for (d = 0; d <= 14; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
	c++;
	}
}
