#include "main.h"
/**
 * more_numbers - prints numbrrs 10 times
 * Description: prints numbers from 0 - 14 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int n, j;

	for (n = '0'; n <= '14'; n++)
	{
		j = 0;

		while (j < 10)
		{
			_putchar(n);
			j++;
		}
	}
	_putchar('\n');
}
