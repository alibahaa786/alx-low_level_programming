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

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			result = i * m;
			_putchar('0' + result);
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
