#include "main.h"
/**
 * Desc: function that prints alphabet in lowercase
 *
 * Returns: no return
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
