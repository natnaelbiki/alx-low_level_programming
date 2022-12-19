#include "main.h"
/**
 * puts2 - print one char of string
 * @str: pointer to string
 * Return: no return
 */
void puts2(char *str)
{
	int i, l;

	l = 0;
	while (str[l] != '\n')
		l++;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('/n');
}
