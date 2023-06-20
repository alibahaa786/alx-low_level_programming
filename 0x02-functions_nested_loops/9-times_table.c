#include "main.h"

/**
 * times_table - Print times tabke
 * Return: Null
*/

void times_table(void)
{
	int i;
	int m;
	int result;
	int unit;
	int tens;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			result = i * m;
			if (m != 0 && result <= 9)
				_putchar(' ');
			if (result <= 9)
				_putchar('0' + result);
			else
			{
				unit = result % 10;
				tens = result / 10;
				_putchar('0' + tens);
				_putchar('0' + unit);
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');		
			}
		}
		_putchar('\n');
	}
}
