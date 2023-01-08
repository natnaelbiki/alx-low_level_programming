#include "main.h"
/**
 * comparar - function that returns power of number
 * @n: original num
 * @y: counter
 * Return: square root
 */
int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}
/**
 * is_prime_number - return 1 if num is prime 
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (comparar(n, 1) == 2)
	{
		return (1);
	}
	else
		return (0);
}
