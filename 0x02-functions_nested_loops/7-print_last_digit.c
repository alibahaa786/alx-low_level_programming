#include "main.h"

/**
 * print_last_digit - prints last digit of input
 * @n: input
 * Return: last digit
*/

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(48 + n);
	return (n);
}
