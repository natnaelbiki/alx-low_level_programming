#include "main.h"
/**
 * _memcpy - copy n byte from memory
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: amount to copy
 * Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _realloc - reallocate a memory block using malloc
 * @ptr: old memory block
 * @old_size: size of old memory block
 * @new_size: size of the new memory block
 * Return: pointer to new memory space, Null if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = _memcpy(nptr, ptr, min);
	free(ptr);
	return (nptr);
}
