#include "3-calc.h"
/**
 * main - entry point
 * @argc: the number of parameters
 * @argv: the parameters
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(n1, n2);
	printf("%d\n", result);
	return (0);
}
