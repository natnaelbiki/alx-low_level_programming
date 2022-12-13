#include "main.h"
/**
 * print_sign: program to print the sign of number
 *
 * Return: returns 0 if 0 1 if positive and -1 if negative
 *
 * Description: function to check the sign of number
 *
 * @n: number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		return (5);
}
