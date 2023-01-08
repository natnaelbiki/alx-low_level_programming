#include "main.h"
/**
 * comparar - function that returns the power of number
 * @n: original number
 * @y: counter
 * Return: sqrt
 */
int comparar(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y > n)
		return (-1);
	return (comparar(n, y + 1));
}
/**
 * _sqrt_recursion - returns sqrt of number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (comparar(n, 1));
}
