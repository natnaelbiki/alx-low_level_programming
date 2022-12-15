#include "main.h"
/**
 * print_line - prints the line
 * @n: number of lines
 * Description: a program to print lines n times
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
