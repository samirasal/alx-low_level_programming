#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a pointer to the char data type
 * Return: Always Success
 */

void rev_string(char *s)
{
	char rev = s[0];
	int longi = 0;
	int o;

	while (s[longi] != '\0')
	longi++;
	for (o = 0; o < longi; o++)
	{
	longi--;
	rev = s[o];
	s[o] = s[longi];
	s[longi] = rev;
	}
}
