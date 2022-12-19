#include "main.h"
/**
 * swap_int - swaps two integer
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 * Description: swaps the value of two integers
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
