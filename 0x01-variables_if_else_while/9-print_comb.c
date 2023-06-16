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
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');	
	return (0);
}
