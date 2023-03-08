#include "main.h"
#include <stdio.h>

int is_prime_number(int n);

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number,
 * otherwise return 0
 * Returm: expected
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
			}
			int is_prime_number(int n, i)
			{
			if (n <= 1)
			return (0);
			if (n % i == 0 && i > 1)
			return (0);
			if ((n / i) < i)
			return (1);

			return (is_prime_number(n, i + 1));
			}
