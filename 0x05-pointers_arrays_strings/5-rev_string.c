#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tempo;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tempo = s[len = index - 1];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tempo;
	}
}
