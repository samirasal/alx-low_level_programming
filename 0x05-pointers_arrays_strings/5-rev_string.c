#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a pointer to the char data type
 * Return: Always Success
 */

void rev_string(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
}
