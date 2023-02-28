#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the data type char of the parameter
 *
 * Return: Always Success
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
	str++;
	s++;
	}
	return (str);
}
