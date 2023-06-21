#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 * Return: 0
*/

int main(void)
{
	unsigned long previous;
	unsigned long current;
	int i;
	unsigned long temp;

	previous = 1;
	current = 2;
	printf("%lu, %lu", previous, current);
	for (i = 1; i <= 96; i++)
	{
		temp = current;
		current += previous;
		previous = temp;
		printf(", %lu", current);
	}
	putchar('\n');
	return (0);
}
