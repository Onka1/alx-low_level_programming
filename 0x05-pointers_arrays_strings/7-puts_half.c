#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int ten;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		ten = (j - 1) / 2;
		ten += 1;
	}
	else
	{
		ten = j / 2;
	}
	for (; ten < j; ten++)
	{
		_putchar(str[ten]);
	}
	_putchar('\n');
}
