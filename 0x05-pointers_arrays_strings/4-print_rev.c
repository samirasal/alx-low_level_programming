#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to the character data type
 * Return: Always Success
 */

void print_rev(char *s)
{
	int str1 = 0;
	int str2;

	while (*s != '\0')
	{
	str++;
	s++;
	}
	s--
	for (str2 = str1; str2 > 0; str2--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
