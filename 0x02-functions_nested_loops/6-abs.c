#include "main.h"
/**
 * _abs: computes absolute value of number
 * Return: returns the abs value
 * Description: program that calculate absolute valuw of a number
 * i - value to be calculated
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
