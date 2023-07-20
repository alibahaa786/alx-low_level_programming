#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: int
 * @...: sdf
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int sum = 0;

	if (!n)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	return (sum);
}
