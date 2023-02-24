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

	while (C <= 'Z')
	{
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar(C);
	C++;
	}
	putchar('\n');
	return (0);
}
