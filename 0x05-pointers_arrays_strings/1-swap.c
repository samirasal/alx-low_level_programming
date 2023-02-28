#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: input1
 * @b: input2
 *
 * Return: a = b, b = a
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
