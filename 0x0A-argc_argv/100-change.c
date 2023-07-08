#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num_coins = 0;
	int num = atoi(argv[1]);

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins += num / 25;
	num %= 25;
	num_coins += num / 10;
	num %= 10;
	num_coins += num / 5;
	num %= 5;
	num_coins += num / 2;
	num %= 2;
	num_coins += num;
	printf("%d\n", num_coins);
	return (0);
}
