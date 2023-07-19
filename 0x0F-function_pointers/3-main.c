#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;

	if (argc != 4)
	{
		printf("Erro 98r\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (!get_op_func(op))
	{
		printf("Error 99\n");
		exit(99);
	}
	if ((*op == 37 || *op == 47) && num2 == 0)
	{
		printf("Error 100\n");
		exit(100);
	}
	printf("%d\n",get_op_func(op)(num1, num2));
	return (0);
}
