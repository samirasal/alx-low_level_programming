#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase in reverse
 * Return: Always Success
 *
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);
}

