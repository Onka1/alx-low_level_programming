#include "main.h"
#include <stdio.h>
/**
 * print_times_table - a function that prints the n
 * times table, starting with 0.
 * Return: expected output
 */
void print_times_table(int n)
{
	int numba, product, multiple;

	if (n >= 0 && n <= 15)
	{
		for (numba = 0; numba <= n; numba++)
		{
			_putchar('0');
			for (multiple = 1; multiple <= n; multiple++)
			{
				_putchar(',');
				_putchar(' ');
				product = numba * multiple;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
				_putchar(((product / 10)) % 10 + '0');
			}
			else if (product <= 99 && product >= 10)
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
}
