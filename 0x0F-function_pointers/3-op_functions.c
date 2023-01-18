#include "3-calc.h"
/**
 * op_add - function to add two numbers
 * @a: the first number
 * @b: the second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract two numbers
 * @a: the first number
 * @b: the second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply two numbers
 * @a: the first number
 * @b: the second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: result of the divide
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - calculate the module
 * @a: the first number
 * @b: the second number
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
