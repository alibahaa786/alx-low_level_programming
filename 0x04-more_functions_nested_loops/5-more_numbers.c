#include "main.h"

/**
 * more_numbers - print numbers
 * Return: Null
*/

void more_numbers(void)
{
	int i;
	int j = 10;

	while (j--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
