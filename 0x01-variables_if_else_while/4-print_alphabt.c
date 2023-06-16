#include <stdio.h>

/**
 * main - print alphabet
 * Return: 0 if executed properly,
 * otherwise non-zero
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
