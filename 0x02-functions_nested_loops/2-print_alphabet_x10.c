#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: Null
*/

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
