#include "main.h"
/**
 * *_strcat - concatenates two strings,
 * @dest: dest
 * @src: source
 * Description: program to concatenate two strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int s = 0, i = 0;

	while (dest[s] != 0)
	{
		s++;
	}
	while (src[i] != 0)
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = 0;
	return (dest);
}
