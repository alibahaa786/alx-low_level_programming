#ifndef FUNCTIONS
#define FUNCTIONS
#include <stdarg.h>
typedef struct type
{
	char *c;
	void (*func)(va_list arg);
} type_finder;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
#endif
