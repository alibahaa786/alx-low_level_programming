#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: input
 * Return: null
*/

void print_to_98(int n)
{
	int unit;
	int tens;

	for (; n <= 98; n++)
	{
		if (n <= 9)
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			unit = n % 10;
			tens = n / 10;
			_putchar('0' + tens);
			_putchar('0' + unit);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
