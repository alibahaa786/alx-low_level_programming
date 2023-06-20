#include "main.h"

/**
 * add - print sum
 * @a: first input
 * @b: second input
 * Return: sum
*/

int add(int a, int b)
{
	int sum;
	int unit;
	int tens;

	sum = a + b;
	unit = sum % 10;
	tens = sum / 10;
	_putchar('0' + tens);
	_putchar('0' + unit);
}
