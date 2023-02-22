#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: expected output
 */
int main(void)
{
	int m = 0;
	long n = 1, l = 2;

	while (m < 50)
	{
		if (m == 0)
			printf("%ld", n);
		else if (m == 1)
			printf(", %ld", l);
		else
		{
			l += n;
			n = l - n;
			printf(", %ld", l);
		}
		++m;
	}
	printf("\n");
	return (0);
}
