#include "main.h"

/**
 * puts2 - put every other letter
 * @str: pointer
 * Return: null
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
