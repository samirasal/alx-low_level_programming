#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase followed by a new line
 * Return: Always Success.
 *
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
	while (C <= 'Z')
	{
	putchar(C);
	C++;
	}
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
