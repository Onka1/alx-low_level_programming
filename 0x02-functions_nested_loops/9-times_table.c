#include "main.h"
/**
 * times_table - a function that prints the 9
 * times table, starting with 0
 * Return: function expected output
 */
void times_table(void)
{
	int xx, yy, zz, uu, dd;

for (xx = 0; xx <= 9; xx++)
{
for (yy = 0; yy <= 9; yy++)
{
zz = xx * yy;
if (zz > 9)
{
	uu =  zz % 10;
	dd = (zz - uu) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(dd + '0');
	_putchar(uu + '0');
}
else
{
	if (yy != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(zz + '0');
}
}
_putchar('\n');
}
}
