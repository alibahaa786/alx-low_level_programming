#include "main.h"

/**
 * _puts - kasdf
 * @str: pointer
 * Return : null
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
