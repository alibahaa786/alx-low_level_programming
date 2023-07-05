#include "main.h"

/**
 * _puts_recursion - function
 * @s: string
 * Return: Null
*/

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s += 1;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
