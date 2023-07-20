#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: integer
 * @argv: array
 * Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int (*func)(int, char **) = main;
	int bytes;
	int i;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)func;
		printf("%.2x", opcode);
		if (i != bytes - 1)
			printf(" ");
		func++;
	}
	printf("\n");
	return (0);
}
