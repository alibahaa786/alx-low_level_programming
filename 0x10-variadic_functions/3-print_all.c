#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

void print_str(va_list arg)
{
	char *str;
	str = va_arg(arg, char*);
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list list;
	type_finder type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(list, format);
	while ((*(format + i)))
	{
		j = 0;
		while (j < 4)
		{
			if ((*(format + i)) == *(type[j].c))
			{
				type[j].func(list);
				continue;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
