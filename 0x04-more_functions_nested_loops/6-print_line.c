#include "main.h"

/**
 * print_line - print n _
 * @n: input
 * Return: Null
*/

void print_line(int n)
{
	while (n--)
	{
		if (!(n <= 0))
			_putchar('_');
		_putchar('\n');
	}
}
