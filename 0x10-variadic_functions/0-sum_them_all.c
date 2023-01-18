#include "variadic_functions.h"
/**
 * sum_them_all - sum of vardiac function
 * @n: const
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	double sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
