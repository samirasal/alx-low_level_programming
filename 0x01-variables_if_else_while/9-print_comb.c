#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * Return: Always Success
 *
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
