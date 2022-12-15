#include "main.h"
/**
 * _isupper - checks if character is upper
 * @c: character
 * Description: checks the passed character is uppercase or not
 * Return: returns 0 if not upper unless 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
