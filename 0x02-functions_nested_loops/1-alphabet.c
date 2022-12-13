#include "main.h"
/**
 * print_alphabet: function that prints alphabet in lowercase
 * Returns: no return
 * Description: function that prints alphabet in lowercase
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
