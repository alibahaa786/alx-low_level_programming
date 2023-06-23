#include "main.h"

/**
 * print_number - print
 * @n: input
 * Return: Null
*/

void print_number(int n)
{
	unsigned int div = 1;
	int digit;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n / div > 9)
		div *= 10;
	for (; div >= 1; div /= 10)
	{
		digit = n / div;
		n = n - (digit * div);
		_putchar('0' + digit);
	}
}
