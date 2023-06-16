#include <stdio.h>

/**
 * main - print all digits base 16
 * Return: 0 if executed properly
 * otherwise non-zero
*/

int main(void)
{
	char x;
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
