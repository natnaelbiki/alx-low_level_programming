#include "main.h"
/**
 * _isdigit - checks the value if it is number
 * @c: the value to be checked
 * Description: program to check the passed value is number or not
 * Return: returns 0 if not else 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
