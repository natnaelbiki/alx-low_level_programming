#include "function_pointers.h"
/**
 * int_index - this function finds the index
 * @array: the array to find the index
 * @size: the size of the array
 * @cmp: this function pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
