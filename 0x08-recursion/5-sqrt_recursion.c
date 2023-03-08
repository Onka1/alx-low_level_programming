#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - return natural sqaure
 * root of a number
 * Return: expected
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (i);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
