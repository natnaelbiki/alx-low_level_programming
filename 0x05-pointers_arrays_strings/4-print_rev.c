#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i, j, l;

	i = 0;
	while (s[i] != '\0')
		i++;
	l = i;
	for (j = l - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
