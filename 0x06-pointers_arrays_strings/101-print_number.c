#include "main.h"

/**
 * print_number - function
 * @n: input
 * Return: null
*/

void print_number(int n)
{
	unsigned int i;
	
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 1; n / i > 9; i *= 10)
	{
	}
	for (; i != 1; i /= 10)
	{
		_putchar('0' + n / i);
		n -= (n / i) * i;
	}
	_putchar('0' + n);
}
