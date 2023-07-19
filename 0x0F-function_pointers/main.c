#include <stdio.h>
#include "calc.h"
#include <stdlib.h>

/**
 * main - function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
*/

int main(argc, argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argv[2] != "+" &&
			argv[2] != "-" &&
			argv[2] != "/" &&
			argv[2] != "*" &&
			argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "%" || argv[2] == "/") && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n",get_op_func(argv[2])(num1, num2));
	return (0);
}
