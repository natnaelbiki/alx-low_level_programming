#include "main.h"
/**
 * main - program to print alphavet 10 times
 * Return: returns 0
 */
int main(void)
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
