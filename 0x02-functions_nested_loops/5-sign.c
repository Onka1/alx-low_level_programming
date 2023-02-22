#include "main.h"
/**
 * print_sign - a function that print
 * the sign of a number
 * Return: 1 or -1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	{
	_putchar(45);
	return (-1);
	}
	{
	_putchar(48);
	return (0);
	}
}
