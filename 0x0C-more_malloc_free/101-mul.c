#include <stdlib.h>
#include <stdio.h>

/**
 * mul - function
 * Return: 0
*/

int main(int argc, char *argv[])
{
	long long num1;
	long long num2;
	unsigned long long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);
	if (!num1 || !num2)
	{
		printf("Error\n");
		exit(98);
	}
	product = num1 * num2;
	printf("%llu\n", product);
	return (0);
}
