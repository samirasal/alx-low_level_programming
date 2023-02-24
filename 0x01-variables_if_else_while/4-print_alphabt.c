#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabets in lowercase except q and e
 * Return: Always Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	while (c != 'q' && c != 'e')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	}
	return (0);
}
