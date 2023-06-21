#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long previous;
	long current;
	long temp;
	long sum;

	previous = 1;
	current = 2;
	sum = 0;
	for (; current <= 4000000;)
	{
		if (current % 2 == 0)
			sum += current;
		temp = current;
		current += previous;
		previous = temp;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
