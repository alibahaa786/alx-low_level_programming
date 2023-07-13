#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: integer
 * @argv: array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	long num1;
	long num2;
	unsigned long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	if (!num1 || !num2)
	{
		printf("Error\n");
		exit(98);
	}
	product = num1 * num2;
	printf("%lu\n", product);
	return (0);
}
