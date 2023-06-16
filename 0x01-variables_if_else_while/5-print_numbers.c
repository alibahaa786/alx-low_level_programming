#include <stdio.h>

/**
 * main - print single digits
 * Return: 0 if executed properly
 * otherwise non-zero
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
