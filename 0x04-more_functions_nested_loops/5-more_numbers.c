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
			_putchcar('0' + i);
		_putchar('\n');
	}
}
