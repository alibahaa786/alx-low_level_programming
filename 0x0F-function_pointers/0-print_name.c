#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: char
 * @f: callback function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
