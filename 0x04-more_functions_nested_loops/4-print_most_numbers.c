#include "main.h"
/**
 * print_most_numbers - prints 0 - 9
 * Description: program to print numbers from 0 - 9
 * Return: no return
 */
void print_most_numbers(void)
{
	int n;

	for (n <= '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
