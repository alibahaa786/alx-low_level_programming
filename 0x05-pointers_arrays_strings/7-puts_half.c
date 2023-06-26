#include "main.h"

/**
 * puts_half - print last half
 * @str: pointer
 * Return: null
*/

void puts_half(char *str)
{
	int i;
	int len;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	len = i;
	if (i % 2 == 0)
	{

		i /= 2;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		i = i / 2 + 1;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
