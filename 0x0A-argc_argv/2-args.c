#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of argument
 * @argv: array of strings
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
