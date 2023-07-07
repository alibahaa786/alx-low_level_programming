#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: integer
 * @argv: array
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int total = 0;

	for (i = 1; i != argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += argv[i];
	}
	printf("%d\n", total);
	return (0);
}
