#include "main.h"
/**
 * factorial - return factorial of input
 * n: input
 * Return: expected
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
