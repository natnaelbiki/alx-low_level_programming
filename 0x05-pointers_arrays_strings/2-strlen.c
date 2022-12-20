#include "main.h"
/**
 * _strlen - program to return string length
 * @s: pointer to string
 * Description: program to return the length of string
 * Return: return the string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
