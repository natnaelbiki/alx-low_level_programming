#include "main.h"
/**
 * print_diagonal - entry point
 * @n: number of diagonals
 * Description: prints diagonal
 * Return: no return
 */
void print_diagonal(int n)
{
	int r, l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; row <= n; r++)
		{
			if (r > 1)
			{
				for (l = 1; l <= r - 1; l++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
