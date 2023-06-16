#include <stdio.h>

/**
 * main - print single digits
 * Return: 0 if executed properly
 * otherwise non-zero
*/

int main(void)
{
	char i;

	putchar('0');
	for (i = 1; i <= 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}
	return (0);
}
