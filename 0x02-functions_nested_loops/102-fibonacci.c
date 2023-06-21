#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long previous;
	long current;
	int i;
	long temp;

	previous = 1;
	current = 2;
	printf("%ld, %ld", previous, current);
	for (i = 3; i <= 50; i++)
	{
		temp = current;
		current += previous;
		previous = temp;
		printf(", %ld", current);
	}
	putchar('\n');
	return (0);
}
