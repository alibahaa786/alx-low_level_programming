#include "main.h"

/**
 * print_times_table - print times table
 * @n: input
 * Return: Null
*/

void print_times_table(int n)
{
	int i;
	int m;
	int product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				product = i * m;
				_putchar(',');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + product / 100);
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
			}
			_putchar('\n');
		}
	}
}
