#include "main.h"

/**
 * more_numbers - print numbers
 * Return: Null
*/

void more_numbers(void)
{
	int i;

	while (10--)
	{
		for (i = 0; i <= 14; i++)
			if (i >= 10)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		_putchar('\n');
	}
}
