#include <stdio.h>

/**
 * main - print alphabet in reverse
 * Return: 0 if executed properly
 * otherwise non-zero
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
