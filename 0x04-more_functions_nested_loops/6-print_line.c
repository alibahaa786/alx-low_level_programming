#include "main.h"

/**
 * print_line - print n _
 * @n: input
 * Return: Null
*/

void print_line(int n)
{
	if (n >= 0)
	{
		while (n--)
		_putchar('_');
	}
	_putchar('\n');
}
