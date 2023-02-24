#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of the number stored in the variable n.
 * Return: Always Success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 2;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", ld, n);
	}
	else if (n == 0)
	{
	printf("Last digit of &n is %d and is 0\n", n);
	}
	else
	{
	printf("Last digit of &n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
