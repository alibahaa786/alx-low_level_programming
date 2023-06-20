#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: null
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
