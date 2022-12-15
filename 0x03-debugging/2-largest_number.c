#include "main.h"
/**
 * largest_number - return the largest number
 * @a: first integer
 * @b: second integer
 * @c: third number
 * Return: returns largest number
 */
int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
		l = a;
	else if (b >= a && b >= c)
		l = b;
	else
		l = c;
	return (l);
}
