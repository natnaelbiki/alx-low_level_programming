#include "main.h"
/**
 * _islower - program to check capital or not
 * Return: returns 1 if not or 0 if capital
 * Description: program to check character is lower or not
 */
int _islower(int c)
{
	if (c >= 95 && c <= (95 + 26))
		return (1);
	else
		return (0);
}
