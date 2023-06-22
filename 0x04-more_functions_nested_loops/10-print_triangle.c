#include "main.h"

/**
 * print_triangle - triangle
 * @size: input
 * Return: Null
*/

void print_triangle(int size)
{
	int i;
	int j = size;
	int x;
	
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			x = i;
			while (x--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
