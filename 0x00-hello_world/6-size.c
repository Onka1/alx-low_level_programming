#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizzeof(char));
	printf("Size of an int: %i byte(s)\n", sizzeof(int));
	printf("Size of a long int: %i byte(s)\n", sizzeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizzeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizzeof(float));
	return (0);
}
