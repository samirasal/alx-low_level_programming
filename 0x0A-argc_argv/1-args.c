#include <stdio.h>
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
	printf("%i\n", argc - 1);
	return (0);
}
