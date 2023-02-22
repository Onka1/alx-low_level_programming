#include <stdio.h>
/**
 * main - sum even values
 * Return: expected output
 */
int main(void)
{
	int m = 0;
	long n = 1, l = 2, sum = l;

	while (l + n < 4000000)
	{
		l += n;
		if (l % 2 == 0)
			sum += l;
		n = l - n;
		++m;
	}
	printf("%ld\n", sum);
	return (0);
}
