#include "main.h"
/**
 * times_table - program to print n times table
 * @n: the number
 * Description: A program that prints n times table
 * Return: no returns
 */
void print_times_table(int n)
{
	int d, m, r;

	if (n >= 15 && n <= 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				r = d * m;
				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar((r /10) + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
