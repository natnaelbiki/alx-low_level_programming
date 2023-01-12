#include "main.h"
/**
 * array_range - create an array of integers
 * @min: first number in the array
 * @max: largest number in the array
 * Return: pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	ar = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	while (n <= max)
	{
		ar[i] = n;
		i++;
		n++;
	}
	return (ar);
}
