#include "main.h"
/**
 * _strpbrk - a function that searches a string for bytes
 * @s: array to be searched
 * @accept: target byte from searching
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}
	return (0);
}
