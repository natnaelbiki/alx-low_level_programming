#include <stdio.h>
#include "main.h"
/**
 * print to 98 - a program to print numbers up to 98
 * Return: no return
 * Description: a function that prints all natural numbers from n to 98
 * @n - starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
