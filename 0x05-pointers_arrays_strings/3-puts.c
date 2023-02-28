#include "main.h"

/**
 * _puts - prints a string to the output stdout
 * @str: pointer to the character data type
 * Return: String
 */

void _puts(char *str)
{
	while (*str != 0)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
