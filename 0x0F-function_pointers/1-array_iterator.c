#include "function_pointers.h"
/**
 * array_iterator - this functions iterates an array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: this function pointer
 * Descripton: function to iterate array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
