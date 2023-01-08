#include "main.h"
/**
 * _puts_recursion - function like puts()
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');

}
