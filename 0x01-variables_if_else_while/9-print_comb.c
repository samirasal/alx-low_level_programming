#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * Return: Always Success
 *
 */
int main(void)
{
	int num = '0';

	while (num <= '8')
	{
	putchar(num);
	putchar(',');
	putchar(' ');
	num++;
	}
	while (num = '9')
	{
	putchar(num);
	}
	return (0);
}
