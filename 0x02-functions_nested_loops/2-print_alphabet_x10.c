#include "main.h"
/**
 * print_alphabet_x10 - program to print lowercase alphabets 10 times
 * Return: returns 0
 * Description: a program to print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;
	while (co <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
