#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the numbers in base 16 in lowercase,followed by a new line
 * Return: Always Success
 *
 */

int main(void)
{
	int num = '0';
	char c = 'a';

	while (num <= '9')
	{
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar(num);
	num++;
	}
	putchar('\n');
	return (0);
}
