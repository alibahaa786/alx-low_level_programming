#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (!n)
		return;
	va_start(numbers, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d", va_arg(numbers, int));
	}
	printf("%d\n", va_arg(numbers, int));
	va_end numbers;
}
