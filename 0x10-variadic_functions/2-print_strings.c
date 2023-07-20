#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: char
 * @n: int
 * Return: Null
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
