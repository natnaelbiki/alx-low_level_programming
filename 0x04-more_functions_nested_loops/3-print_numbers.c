#include "main.h"
/**
 * print_numbers - prints numbers 0 upto 9
 * Description: prints decimal numbers from 0 - 9
 * Return: no return
 */
void print_numbers(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
		_putchar(l);
	_putchar('\n');
}
