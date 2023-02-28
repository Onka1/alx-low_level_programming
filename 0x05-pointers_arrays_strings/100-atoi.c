#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * Return: expected
 */
int _atoi(char *s)
{
	int t = 0;
	unsigned int ni = 0;
	int mini = 1;
	int isi = 0;

	while (s[t])
	{
		if (s[t] == 45)
		{
			mini *= -1;
		}
		while (s[t] >= 48 && s[t] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[t] - '0');
			t++;
		}
		if (isi == 1)
		{
			break;
		}
		t++;
	}
	ni *= mini;
	return (ni);
}
