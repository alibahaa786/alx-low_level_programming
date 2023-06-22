#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: input
 * Return: Null
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j = i;

		while (j--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
