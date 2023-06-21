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
	if (n <=98 && n >= 0)
	{
		for (; n <= 98; n++)
		{
			if (n <= 9)
			{
				_putchar('0' + n);
			}
			else
			{
				unit = n % 10;
				tens = n / 10;
				_putchar('0' + tens);
				_putchar('0' + unit);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			unit = n % 10;
                        tens = n / 10;
                        _putchar('0' + tens);
                        _putchar('0' + unit);
                        
                        if (n != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			n *= -1;
			_putchar('-');
			if (n <= 9)
                        {
                                _putchar('0' + n);
                        }
                        else
                        {
                                unit = n % 10;
                                tens = n / 10;
                                _putchar('0' + tens);
                                _putchar('0' + unit);
                        }
			n *= -1;
                        if (n != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
		}
	}	
	_putchar('\n');
}
