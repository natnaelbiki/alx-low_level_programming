#include <stdio.h>
/**
 * main - program to print the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
