#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * Return: Always Success
 *
 */
int main(void)
{
	int num = '0';

	if (num <= '9')
	{
	putchar(num);
	putchar(',');
	putchar(' ');
	num++;
	}
	else if ((num = '9'))
	{
	putchar('\n');
	}
	return (0);
}
