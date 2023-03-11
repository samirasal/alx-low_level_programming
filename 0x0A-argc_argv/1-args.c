#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
