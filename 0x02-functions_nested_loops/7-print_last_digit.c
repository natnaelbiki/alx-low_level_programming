#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * Return: returns the last digit
 * Description: function that prints the last digit of a numbe
 * @n number to bw checked
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
