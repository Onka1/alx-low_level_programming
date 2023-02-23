#include "main.h"
/**
 * largest_number - This program prints the largest of three integers
 * Return: expected output
 */
int largest_number(int a, int b, int c)
{
	int largest;

		if (a >= b && a >= c)
		{
			largest = a;
		}
		else if (b >= a && b >= c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	return (largest);
}
