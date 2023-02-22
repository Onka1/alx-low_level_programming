#include <stdio.h>
/**
 * main - a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: expected
 */
int main(void)
{
	int p, t = 0;

	while (p < 1024)
	{
		if ((p % 3 == 0) || (p % 5 == 0))
		{
			t += 1;
		}
		p++;
	}
	printf("%d\n", t);
	return (0);
}
