#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of argument
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
