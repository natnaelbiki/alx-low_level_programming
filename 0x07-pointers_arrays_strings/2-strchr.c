#include "main.h"
/**
 * _strchr - checks occurance of c in source data
 * @s: array to be searched.
 * @c: The character being searched
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
