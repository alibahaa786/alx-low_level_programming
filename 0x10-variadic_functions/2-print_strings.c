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
	int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(strings, char*))
			printf("%s", va_arg(strings, char*));
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
