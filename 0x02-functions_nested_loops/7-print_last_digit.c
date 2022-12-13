#include "main.h"
/**
 * print_last_digit - program to print the last digit of a number
 * @n number to bw checked
 * Description: function that prints the last digit of a number
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
