#include "main.h"
/**
 * _memset - entry
 * s: destination
 * b: contant
 * n: byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
