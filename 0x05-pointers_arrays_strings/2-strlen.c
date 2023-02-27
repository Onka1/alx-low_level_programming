#include <stdio.h>
/**
 * _strlen - a function that returns the
 * length of a string
 * Return: expected
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

