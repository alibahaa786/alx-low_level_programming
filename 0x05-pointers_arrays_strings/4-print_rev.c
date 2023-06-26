#include "main.h"

/**
 * print_rev - reverse string
 * @s: pointer
 * Return: null
*/

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
