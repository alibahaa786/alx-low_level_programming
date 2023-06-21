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

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			int negative = 0;

                        if (n < 0)
                        {
                                negative = 1;
                                n *= -1;
                                _putchar('-');
                        }
			if (n / 10 = 0)
			{
				_putchar('0' + n);
			}
			else
			{
				unit = n % 10;
				tens = n / 10;
				if (tens > 9)
					_putchar('0' + tens / 10)
				_putchar('0' + tens % 10);
				_putchar('0' + unit);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (negative == 1)
				n *= -1;
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			unit = n % 10;
			tens = n / 10;
			if (tens > 9)
				int hundreds;
				hundreds = tens / 10;
				tens %= 10;
				_putchar('0' + hundreds);
			_putchar('0' + tens);
			_putchar('0' + unit);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}	
	_putchar('\n');
}
