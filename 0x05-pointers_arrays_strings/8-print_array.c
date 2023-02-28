#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an
 * array of integers, followed by a new line
 * Return: void
 */
void print_array(int *a, int n)
{
	int ray;

	for (ray = 0; ray < n; ray++)
	{
		printf("%d", a[ray]);
		if (ray != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
