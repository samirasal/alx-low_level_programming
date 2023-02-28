#include "main.h"

/**
 * reset_to_98 - set the integer to 98
 * @n: input
 *
 * Return: n
 */

void reset_to_98(int *n);
{
	*n = 98;
}

/**
 * main - how to change the value of a variable from outside the function
 * It uses a pointer
 *
 * Return: Always 0
 */

int main(void)
{
	int m;
	int *p;

	p = &m;
	m = 402;

	_putchar(402);
	reset_to_98(p);
	_putchar(n);
	_putchar('\n');
	return (0);
}

