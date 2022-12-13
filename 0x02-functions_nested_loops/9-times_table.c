#include "main.h"
/**
 * time table - function that prints the 9 times table, starting with 0
 * Return: no return
 */
void times_table(void)
{
	int d, m, l;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			l = d * m;
			if (l <= 9)
				_putchar(' ');
			else
				_putchar((l / 10) + '0');
			_putchar((l % 10 ) + '0');
		}
		_putchar('\n');
	}
}
