#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: input
 * Return: null
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	putchar('\n');
}
