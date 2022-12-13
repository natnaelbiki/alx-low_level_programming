#include "main.h"
/**
 * _isalpha - checks the value is character or not
 * Return: returns 1 on succeed
 * Description: program to check if the value is numver or not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= (65 + 26)) || (c >= 97 && c <= (97 + 26)))
		return (1);
	else
		return (0);
}
