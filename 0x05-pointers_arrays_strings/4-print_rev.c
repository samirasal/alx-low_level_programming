#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to the character data type
 * Return: Always Success
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s--);
	}
	_putchar('\n');
}
