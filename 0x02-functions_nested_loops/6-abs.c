#include "main.h"
/**
 * _abs - a function that computes the
 * absolute value of an integer
 * Return: function output
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
