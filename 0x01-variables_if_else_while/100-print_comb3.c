#include <stdio.h>

/**
 * main - Prints all possible combinations of two different numbers
 * Return: Always Success
 *
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '8'; num1++)
	{
	for (num2 = '1'; num2 <= '9'; num2++)
	{
	putchar(num2);
	}
	putchar(num1);
	}
	if (num1 != '8' && num2 != '9')
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
