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
	int result;

	if (!argv[1] || !argv[2])
	{
		printf("Error");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
