#include "main.h"
/**
 * _last_digit - a function that prints
 * the last digit of a number
 * Return: function output
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
