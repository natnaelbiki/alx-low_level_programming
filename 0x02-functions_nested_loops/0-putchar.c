#include<stdio.h>
/**
 * main - program to print putchar
 * Return: returns 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(c[i]);
	}
	putchar("\n");
	return (0);
}
