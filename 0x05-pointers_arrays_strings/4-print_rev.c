#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: no return
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\n')
		i++;
	for (j = i; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
