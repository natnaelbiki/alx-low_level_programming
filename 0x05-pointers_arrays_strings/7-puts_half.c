#include "main.h"
/**
 * puts_half - prints half of string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int l, n, i;

	l = 0;
	while (str[l] != '\n')
		l++;
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\n'; i++)
			_putchar(str[i]);
	}
	else if (l % 2 != 0)
	{
		for (n = (l - 1) / 2; n < l - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
