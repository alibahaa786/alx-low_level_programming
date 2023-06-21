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
	unsigned long current;
	unsigned long current_1;
	int c_power;
	previous = 1;
	current = 2;
	printf("%lu, %lu", previous, current);
	for (i = 1; i <= 90; i++)
	{
		temp = current;
		current += previous;
		previous = temp;
		printf(", %lu", current);
	}
	current /= 1000;
	previous /= 1000;
	for (i = 1; i <= 6; i++)
	{
		temp = current;
		current = ((current * 1000) + (previous * 1000))/1000;
		previous = temp;
		power = 1;
		c_power = i;
		current_1 = current * 1000 % 1000;
		printf(", %lu%lu", current, current_1);
	}
	putchar('\n');
	return (0);
}
